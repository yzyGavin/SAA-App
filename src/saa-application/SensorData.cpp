//
// Created by Kyle Reis on 11/19/15.
//

#include "SensorData.h"

CDTIPlane* SensorData::getCDTIPlane()
{
   severity = CDTIPlane::PROXIMATE;

   plane->set_id(tailNumber);
   plane->set_severity(severity);
   plane->set_allocated_position(position);
   plane->set_allocated_velocity(velocity);
   plane->set_planetags(0, planeTag);

   return plane;
}

void SensorData::printPos() {
   //printf("tailNumber %s\n", tailNumber);
   printf("position x %f\n", position->x());
   printf("position y %f\n", position->y());
   printf("position z %f\n", position->z());
   printf("velocity x %f\n", velocity->x());
   printf("velocity y %f\n", velocity->y());
   printf("velocity z %f\n", velocity->z());
}
