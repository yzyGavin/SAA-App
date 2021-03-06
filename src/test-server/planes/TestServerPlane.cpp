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
// Created by Kyle Piddington on 12/1/15.
//

#include <math.h>
#include "TestServerPlane.h"
int TestServerPlane::idSeq = 1;

int TestServerPlane::nextId() {
   return TestServerPlane::idSeq++;
}

Vector3d addToLatitudeLongitude(Vector3d latLongAlt, Vector3d translation)
{
   const double R = 20.9e6; //Radius of earth in feet.
   const double ft2Deg = 2*M_PI*R/360.0;
   //Convert N and E into angle rotations
   double dLat = translation.x; //N
   double dLong = translation.y; //E
   double dAlt = -translation.z; //D
   Vector3d finalVector = latLongAlt;
   finalVector.z += dAlt; //Already in feet
   finalVector.x += dLat / ft2Deg; //(in ft, convert to angle)
   finalVector.y += dLong / ft2Deg; //(@TODO make this not actually just plane wrong (Badumchi i hate myself))
   return finalVector;
}

void TestServerPlane::setNorthEastDownVelocity(Vector3d ned)
{
   northEastDownVel = ned;
}

TestServerPlane::TestServerPlane():
      t(0),
      latLongAlt(0,0,0),
      northEastDownVel(0,0,0),
      motionPtr(nullptr),
      tcasID(0),
      radarID(0),
      planeID(0)
{

}

void TestServerPlane::setPlaneId(int pd) {
   planeID = pd;
}

int TestServerPlane::getId() const {
   return planeID;
}

//Actually move the plane (Can't do LatLongAlt from dNES)
void TestServerPlane::update(float dT)
{
   t+=dT;
   if(motionPtr != nullptr) {

      Vector3d translation = this->motionPtr->getVelocityAtTick(t) * dT;
      this->latLongAlt = addToLatitudeLongitude(latLongAlt, translation); //in (ft/sec)
      this->northEastDownVel = this->motionPtr->getVelocityAtTick(t);
   }

}

void TestServerPlane::setAdsbEnabled(bool adsb) {
   this->isADSBEnabled = adsb;
}

void TestServerPlane::setTcasEnabled(bool tcas) {
   this->isTCasEnabled = tcas;
}
void TestServerPlane::setRadarEnabled(bool radar){
   this->isRadarEnabled = radar;
}
void TestServerPlane::setMotion(const Motion & m) {
   if(motionPtr != nullptr)
      delete  motionPtr;
   motionPtr = m.clone();
}

float TestServerPlane::getLatitude() const {
   return this->latLongAlt.x;
}

float TestServerPlane::getLongitude() const {
   return this->latLongAlt.y;
}

float TestServerPlane::getAltitude() const {
   return this->latLongAlt.z;
}

float TestServerPlane::getNorthVelocity() const{
   return this->northEastDownVel.x;
}

float TestServerPlane::getEastVelocity() const{
   return this->northEastDownVel.y;
}

float TestServerPlane::getDownVelocity() const{
   return this->northEastDownVel.z;
}

Vector3d TestServerPlane::getVelocity() const {
   return this->northEastDownVel;
}
bool TestServerPlane::getADSBEnabled() const {
   return this->isADSBEnabled;
}

bool TestServerPlane::getTcasEnabled() const {
   return this->isTCasEnabled;
}
bool TestServerPlane::getRadarEnabled() const
{
   return this->isRadarEnabled;
}
TestServerPlane::~TestServerPlane() {
   if(motionPtr != nullptr)
   {
      delete motionPtr;
      motionPtr = nullptr;
   }
}

void TestServerPlane::setTailNumber(std::string name) {
   this->tailNumber = name;

}
std::string TestServerPlane::getTailNumber() const {
   return this->tailNumber;
}

TestServerPlane::TestServerPlane(const TestServerPlane &other):
t(other.t),
tailNumber(other.tailNumber),
latLongAlt(other.latLongAlt),
northEastDownVel(other.northEastDownVel),
isADSBEnabled(other.isADSBEnabled),
isTCasEnabled(other.isTCasEnabled),
isRadarEnabled(other.isRadarEnabled),
motionPtr(nullptr), planeID(other.planeID)
{
   if (isTCasEnabled)
   {
      tcasID = other.tcasID;
   }
   if (isRadarEnabled)
   {
      radarID = other.radarID;
   }

   if(other.motionPtr != nullptr)
      this->motionPtr = other.motionPtr->clone();

}


double TestServerPlane::getTimestamp() const
{
   return t;
}

Motion *TestServerPlane::getMotion() {
   return motionPtr;
}

void TestServerPlane::setLatLongAlt(Vector3d latLongAlt) {
   this->latLongAlt = latLongAlt;

}

TestServerPlane &TestServerPlane::operator=(const TestServerPlane &rhs) {
   if(&rhs == this)
      return *this;

   this->latLongAlt = rhs.latLongAlt;
   this->northEastDownVel = rhs.northEastDownVel;
   this->isADSBEnabled = rhs.isADSBEnabled;
   this->isTCasEnabled = rhs.isTCasEnabled;
   this->isRadarEnabled = rhs.isRadarEnabled;
   this->planeID = rhs.planeID;
   if (this->isTCasEnabled)
   {
      this->tcasID = rhs.tcasID;
   }
   if (this->isRadarEnabled)
   {
      this->radarID = rhs.radarID;
   }
   this->tailNumber = rhs.tailNumber;
   if(this->motionPtr)
      delete motionPtr;
   this->motionPtr = rhs.motionPtr->clone();
   this->t = rhs.t;

   return *this;
}

int TestServerPlane::getTcasId() const {
   return tcasID;
}
int TestServerPlane::getRadarId() const
{
   return radarID;
}
void TestServerPlane::setTcasId(int tc) {
   this->tcasID = tc;
}
void TestServerPlane::setRadarId(int rd)
{
   this->radarID = rd;
}

const Vector3d& TestServerPlane::getLatLongAlt() const
{
   return latLongAlt;
}

