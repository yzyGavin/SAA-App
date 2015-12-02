//
// Created by Kyle Piddington on 11/15/15.
//

#include <iostream>
#include <vector>
#include <common/sockets/ClientSocket.h>
#include <common/sockets/SocketException.h>
#include <common/protobuf/adsb.pb.h>
#include <common/protobuf/ownship.pb.h>
#include "SaaApplication.h"
#include "Correlation.h"
#include "Decision.h"
#include "Plane.h"
#include "common/Maths.h"

/**
 * Sets up the socket connections to the test server for reading in sensor data.
 */
void SocketSetup(ClientSocket & adsbSock, ClientSocket & ownSock) {
    try {
         adsbSock.connect("localhost", 4000);
         ownSock.connect("localhost", 5000);
    }
    catch (SocketException) {
        std::cout << "failed to open socket" << std::endl;
        std::exit(-1);
    }
}

/**
 * Takes in an AdsBReport and the OwnshipReport data and returns a vector (a list)
 * containing the adsb data converted to relative position to the ownship in the form of a plane object.
 */
std::vector <Plane> convertToRelative(AdsBReport adsb, OwnshipReport ownship) {
    std::vector<Plane> planes;
    std::string tailNumber = "Tail Number Here";
    int positionX = calcDistance(adsb.latitude(), ownship.ownship_longitude(), ownship.ownship_latitude(), ownship.ownship_longitude());
    int positionY = calcDistance(ownship.ownship_latitude(), adsb.longitude(), ownship.ownship_latitude(), ownship.ownship_longitude());
    int positionZ = adsb.altitude() - ownship.ownship_altitude();
    int velocityX = fpsToNmph(ownship.north()) - fpsToNmph(adsb.north());
    int velocityY = fpsToNmph(ownship.east()) - fpsToNmph((adsb.east()));
    int velocityZ = fpsToNmph(ownship.down()) - fpsToNmph(adsb.down());
    Plane adsbPlane(tailNumber, positionX, positionY, positionZ, velocityX, velocityY, velocityZ);
    planes.push_back(adsbPlane);
    return planes;
}

void SaaApplication::report()
{
    bool run = true;
    Correlation cor;
    AdsBReport adsb;
    OwnshipReport ownship;

    //set up sockets
    ClientSocket ownSock;
    ClientSocket adsbSock;
    SocketSetup(adsbSock, ownSock);

    //socks.pop_back();

    // loop for each cycle (1 sec) currently being handled by waiting for the server on the reads.
    while(run) {
        try {
            adsbSock.operator>>(adsb); //blocking call, waits for server
            ownSock.operator>>(ownship); //blocking call, waits for server
            std::vector<Plane> planes = convertToRelative(adsb, ownship);
            planes = cor.correlate(planes);
            std::cout << "finished one cycle" << std::endl;
            //send to decision making module here
        }
        catch (SocketException) {
            std::cout << "got a socket exception..." << std::endl;
            run = false;
        }
    }
/*
    std::cout << "Hello from Saa App!" << std::endl;
    Correlation cor;
    Decision dec;
    cor.report();
    dec.report(&list);
    auto rep = dec.generateReport(&list);
    delete rep;
    */
}


