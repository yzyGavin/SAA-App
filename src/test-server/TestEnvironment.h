//
// Created by Kyle Piddington on 11/24/15.
//

#ifndef SAA_APPLICATION_TESTENVIRONMENT_H
#define SAA_APPLICATION_TESTENVIRONMENT_H

#include <test-server/endpoints/SocketSensorEndpoint.h>
#include "test-server/endpoints/SensorEndpoint.h"
#include "test-server/endpoints/Sensor.h"
#include "test-server/endpoints/AdsbSensor.h"
#include "test-server/endpoints/OwnshipSensor.h"
#include "TestCase.h"

class TestEnvironment {
   public:
      TestEnvironment();
      bool acceptConnections();
      void start(TestCase & tc);

   private:
      AdsbSensor adsbSensor = AdsbSensor(new SocketSensorEndpoint());
      OwnshipSensor ownshipSensor = OwnshipSensor(new SocketSensorEndpoint());
      ClientSocket cdtiSocket;



};


#endif //SAA_APPLICATION_TESTENVIRONMENT_H
