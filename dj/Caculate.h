#ifndef _CACULATE_H__
#define _CACULATE_H__

#include "DJI.h"
#include "decode.h"

void positionServo(float ref, DJI_t * motor);

void speedServo(float ref, DJI_t * motor);

void jihuangpositionServo(float ref, DJI_t * motor,LidarPointTypedef *lidardata);
#endif