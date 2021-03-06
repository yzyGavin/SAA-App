/**
 * Copyright (c) 2016 Cal Poly Capstone Team Rocket
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in the
 * Software without restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */
//
// Created by Kyle Piddington on 11/15/15.
//

#include <test-server/endpoints/AdsbSensor.h>
#include <common/UniformVec3dNoise.h>
#include "TestServer.h"


SensorEndpoint * TestServer::ownshipSocket = nullptr;
SensorEndpoint * TestServer::adsbSocket = nullptr;
SensorEndpoint * TestServer::tcasSocket = nullptr;
SensorEndpoint * TestServer::radarSocket = nullptr;

//todo figure out what numbers to put here
Randomizer *TestServer::tcasRangeNoise = new Randomizer(-100 * NAUT_MILES_TO_FEET, 100 * NAUT_MILES_TO_FEET);
Randomizer *TestServer::tcasAltitudeNoise = new Randomizer(-125, 125);
Randomizer *TestServer::tcasBearingNoise = new Randomizer(-10, 10);

Randomizer *TestServer::adsbLatNoise = new Randomizer(-0.0001, 0.0001);
Randomizer *TestServer::adsbLongNoise = new Randomizer(-0.0001, 0.0001);;
Randomizer *TestServer::adsbAltNoise = new Randomizer(-50, 50);
//Vec3dNoise *TestServer::adsbVelNoise = new UniformVec3dNoise(Vector3d(-15, -10, -10), Vector3d(15, 10, 10));


Vec3dNoise *TestServer::radarPosNoise = new UniformVec3dNoise(Vector3d(-50.0, -2.5, 0),
                                                              Vector3d( 50.0, 2.5, 0));

Vec3dNoise *TestServer::radarVelNoise = new UniformVec3dNoise(Vector3d(-0.0001, -0.0001, -50),
                                                              Vector3d(0.0001, 0.0001, 50));



bool TestServer::noiseEnabled = false;


SensorEndpoint * TestServer::getOwnshipSocket()
{
    return ownshipSocket;
}

SensorEndpoint * TestServer::getAdsbSocket()
{
    return adsbSocket;
}

void TestServer::provideOwnshipEndpoint(SensorEndpoint *endpoint)
{
    TestServer::ownshipSocket = endpoint;
}

void TestServer::provideAdsbEndpoint(SensorEndpoint *endpoint)
{
    TestServer::adsbSocket = endpoint;

}

void TestServer::provideRadarEndpoint(SensorEndpoint * endpoint)
{
    TestServer::radarSocket = endpoint;
}
void TestServer::provideTcasEndpoint(SensorEndpoint * endpoint)
{
    TestServer::tcasSocket = endpoint;
}

void TestServer::shutdown()
{
    if(ownshipSocket != nullptr)
        delete ownshipSocket;
    if(adsbSocket != nullptr)
        delete adsbSocket;
    if(tcasSocket != nullptr)
        delete tcasSocket;
    if(radarSocket != nullptr)
        delete radarSocket;

}

SensorEndpoint *TestServer::getTcasSocket() {
    return tcasSocket;
}

SensorEndpoint *TestServer::getRadarSocket() {
    return radarSocket;
}

void TestServer::useNoise(bool noise)
{
    noiseEnabled = noise;
}

bool TestServer::hasNoise()
{
    return noiseEnabled;
}

Vector3d TestServer::scrambleADSB(Vector3d position)
{
    Vector3d newPosition(0, 0, 0);
    newPosition.x = adsbLatNoise->getRandom((float) position.x);
    newPosition.y = adsbLongNoise->getRandom((float) position.y);
    newPosition.z = adsbAltNoise->getRandom((float) position.z);

    return newPosition;
}

Vector3d TestServer::scrambleTCAS(Vector3d position)
{
    Vector3d newPosition(0, 0, 0);
    newPosition.x = tcasRangeNoise->getRandom((float) position.x);
    newPosition.y = tcasBearingNoise->getRandom((float) position.y);
    newPosition.z = tcasAltitudeNoise->getRandom((float) position.z);

    return newPosition;
}

/*
Vector3d TestServer::scrambleRadar(Vector3d position)
{
    Vector3d newPosition(0, 0, 0);
    newPosition.x = radarRangeNoise->getRandom((float) position.x);
    newPosition.y = radarAzimuthNoise->getRandom((float) position.y);
    newPosition.z = radarElevationNoise->getRandom((float) position.z);

    return newPosition;
}
*/





Vec3dNoise *TestServer::getRadarPositionNoise() {
    return radarPosNoise;
}

Vec3dNoise *TestServer::getRadarVelocityNoise() {
    return radarVelNoise;
}
