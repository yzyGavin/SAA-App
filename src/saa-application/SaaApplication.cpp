/*
 * Created by Kyle Piddington on 11/15/15.
 * Main Author: Jacob Hardi
 */

#include <iostream>
#include <vector>
#include <common/sockets/ClientSocket.h>
#include <common/sockets/SocketException.h>
#include <common/protobuf/adsb.pb.h>
#include "SaaApplication.h"
#include "Correlation.h"
#include "Decision.h"
#include <mutex>
#include <chrono>
#include "common/Maths.h"
#include <common/protobuf/tcas.pb.h>
#include <common/protobuf/radar.pb.h>


ServerSocket *SaaApplication::cdtiSocket = nullptr;
std::vector<SensorData> planes;
std::mutex mtx;
SensorData ownshipPlane("Ownship", 0, 0, 0, 0, 0, 0, Sensor::ownship, 0, 0);

void acceptNetworkConnection(ServerSocket *acceptingSocket, ServerSocket *bindingSocket)
{
   bindingSocket->accept(*acceptingSocket);
   std::cout << "Server has accepted cdti socket" << std::endl;
}

/**
 * Sets up the socket connections to the test server for reading in sensor data.
 */
void SocketSetup(ClientSocket &radarSock, ClientSocket &tcasSock, ClientSocket &adsbSock, ClientSocket &ownSock)
{
   try
   {
      radarSock.connect("localhost", 5003);
      tcasSock.connect("localhost", 5002);
      adsbSock.connect("localhost", 5001);
      ownSock.connect("localhost", 5000);
   }
   catch (SocketException)
   {
      std::cout << "failed to open socket" << std::endl;
      std::exit(-1);
   }
}

ServerSocket *SaaApplication::getCdtiSocket()
{
   return cdtiSocket;
}

void SaaApplication::setupSockets(int cdtiPort)
{
   cdtiSocket = new ServerSocket(cdtiPort);
   std::cout << "cdtiSocket initialized" << std::endl;
}

void SaaApplication::shutdown()
{
   if (cdtiSocket != nullptr)
   {
      delete cdtiSocket;
   }
}

/**
 * Takes in an adsbReport and the OwnshipReport data and returns the SensorData version of
 * the adsb data converted to relative position to the ownship.
 */
SensorData adsbToRelative(AdsBReport adsb, OwnshipReport ownship)
{
   std::string tailNumber = adsb.tail_number();
   float positionX = calcDistance(adsb.latitude(), ownship.ownship_longitude(), ownship.ownship_latitude(),
                                  ownship.ownship_longitude()) * (adsb.latitude() < ownship.ownship_latitude()? -1 : 1);
   float positionY = calcDistance(ownship.ownship_latitude(), adsb.longitude(), ownship.ownship_latitude(),
                                  ownship.ownship_longitude()) * (adsb.longitude() < ownship.ownship_longitude()? -1 : 1);
   float positionZ = adsb.altitude() - ownship.ownship_altitude();
   float velocityX = fpsToNmph(ownship.north()) - fpsToNmph(adsb.north());
   float velocityY = fpsToNmph(ownship.east()) - fpsToNmph((adsb.east()));
   float velocityZ = fpsToNmph(ownship.down()) - fpsToNmph(adsb.down());
   SensorData adsbPlane(tailNumber, positionX, positionY, positionZ, velocityX, velocityY, velocityZ, Sensor::adsb, adsb.plane_id(), adsb.timestamp());
   return adsbPlane;
}

/**
 * Takes in a TcasReport and the OwnshipReport data and returns the SensorData version of
 * the tcas data converted to relative position to the ownship.
 */
SensorData tcasToRelative(TcasReport tcas, OwnshipReport ownship)
{
   std::string tailNumber = std::to_string(tcas.id());
   float positionZ = tcas.altitude();
   float horizRange = sqrt( tcas.range() * tcas.range()- tcas.altitude() * tcas.altitude() );
   //@TODO: Add in velocity to fix this. Will be using flat x movement for demo.
   float positionX = (float)(horizRange * cos(bearingToRadians(tcas.bearing())));
   float positionY = (float)(horizRange * sin(bearingToRadians(tcas.bearing())));
   float velocityX = 0;
   float velocityY = 0;
   float velocityZ = 0;
   SensorData tcasPlane(tailNumber, positionX, positionY, positionZ, velocityX, velocityY, velocityZ, Sensor::tcas, tcas.plane_id(), 0);
   return tcasPlane;
}

/**
 * Takes in a RadarReport and the OwnshipReport data and returns the SensorData version of
 * the radar data converted to relative position to the ownship.
 */
SensorData radarToRelative(RadarReport radar, OwnshipReport ownship)
{
   std::string tailNumber = std::to_string(radar.id());
   float positionZ = radar.range() * sin(-bearingToRadians(radar.elevation()));
   float vertRange = positionZ / NAUT_MILES_TO_FEET;
   float horizRange = sqrt(radar.range() * radar.range() - vertRange * vertRange);

   float positionX = horizRange * cos(radar.azimuth());
   float positionY = horizRange * sin(radar.azimuth());
   float velocityX = fpsToNmph(radar.north());
   float velocityY = fpsToNmph(radar.east());
   float velocityZ = fpsToNmph(radar.down());
   SensorData radarPlane(tailNumber, positionX, positionY, positionZ, velocityX, velocityY, velocityZ, Sensor::radar, radar.plane_id(), radar.timestamp());
   return radarPlane;
}

void SaaApplication::initSocks()
{
   //Set up server sockets
   setupSockets(6000);
   std::thread t1(acceptNetworkConnection, &this->cdtiOut, getCdtiSocket());
   //std::thread t2(acceptNetworkConnection,&this->validationOut, getCdtiSocket());

   //set up client sockets
   ClientSocket radarSock, tcasSock, adsbSock, ownSock;
   SocketSetup(radarSock, tcasSock, adsbSock, ownSock);
   t1.join();
   //t2.join();
   //socks.pop_back();

   processSensors(ownSock, adsbSock, tcasSock, radarSock);
}

/*
 * Thread for the ownship socket data. Reads in an ownship report and updates the shared ownship data.
 */
void processOwnship(ClientSocket &ownSock, OwnshipReport &ownship, bool &finished)
{
   while(ownSock.hasData())
   {
      ownSock.operator>>(ownship); //blocking call, waits for server
      // TODO: Switch to actual ownship data for use by Decision
      ownshipPlane = SensorData("Ownship", 0, 0, 0, ownship.north(), ownship.east(), ownship.down(), Sensor::ownship, 0, 0);
   }
   std::cout << "Ownship Thread done\n";

   finished = true;
}

/*
 * The thread for the adsb socket data. Reads in an adsb report and adds it to the shared list of planes.
 */
void processAdsb(ClientSocket &adsbSock, OwnshipReport &ownship, bool &finished)
{
   AdsBReport adsb;
   while(adsbSock.hasData())
   {
      adsbSock.operator>>(adsb); //blocking call, waits for server
      mtx.lock();
      planes.push_back(adsbToRelative(adsb, ownship));
      mtx.unlock();
   }
   std::cout << "ADSBThread done\n";

   finished = true;
}

/*
 * The thread for the tcas socket data. Reads in a tcas report and adds it to the shared list of planes.
 */
void processTcas(ClientSocket &tcasSock, OwnshipReport &ownship, bool &finished)
{
   TcasReport tcas;
   while(tcasSock.hasData())
   {
      tcasSock.operator>>(tcas); //blocking call, waits for server
      mtx.lock();
      planes.push_back(tcasToRelative(tcas, ownship));
      mtx.unlock();
   }
   std::cout << "TCASThread done\n";

   finished = true;
}

/*
 * The thread for the radar socket data. Reads in a radar report and adds it to the shared list of planes.
 */
void processRadar(ClientSocket &radarSock, OwnshipReport &ownship, bool &finished)
{
   RadarReport radar;
   while(radarSock.hasData())
   {
      radarSock.operator>>(radar); //blocking call, waits for server
      mtx.lock();
      planes.push_back(radarToRelative(radar, ownship));
      mtx.unlock();
   }
   std::cout << "RadarThread done\n";

   finished = true;
}

/*
 * Sets up the separate threads for the individual plane sensor sockets and contains
 * the main loop for timing when to send data on to the correlation module,
 * then the decision module, and finally onto the cdti and validation server.
 */
void SaaApplication::processSensors(ClientSocket ownSock, ClientSocket adsbSock, ClientSocket tcasSock, ClientSocket radarSock)
{
   Correlation cor;
   Decision dec;
   CDTIReport *rep = nullptr;
   OwnshipReport ownship;

   try
   {
      bool adsbFinished = false, ownshipFinished = false, tcasFinished = false, radarFinished = false;
      CDTIPlane::Severity severity;
      std::thread ownshipthread(processOwnship, std::ref(ownSock), std::ref(ownship), std::ref(ownshipFinished));
      std::thread adsbthread(processAdsb, std::ref(adsbSock), std::ref(ownship), std::ref(adsbFinished));
      std::thread tcasthread(processTcas, std::ref(tcasSock), std::ref(ownship), std::ref(tcasFinished));
      std::thread radarthread(processRadar, std::ref(radarSock), std::ref(ownship), std::ref(radarFinished));
      while (!adsbFinished && !ownshipFinished && !tcasFinished && !radarFinished)
      {
         std::this_thread::sleep_for(std::chrono::seconds(1));
         mtx.lock();
         std::vector<SensorData> planesCopy = planes;
         planes.clear();
         mtx.unlock();
         std::vector<CorrelatedData> planesResult = cor.correlate(planesCopy);
         dec.calcAdvisory(&list, &planesResult, &severity, &ownshipPlane);
         rep = dec.generateReport(&list, ownshipPlane.getCDTIPlane(), &severity);
         cdtiOut << (*rep);
         //validationOut << (*rep);
         std::cout << "finished one cycle" << std::endl;
      }
      adsbthread.join();
      tcasthread.join();
      radarthread.join();
      ownshipthread.join();
   }
   catch (SocketException)
   {
      std::cout << "got a socket exception... exiting" << std::endl;
      exit(-1);
   }

   delete rep;
}