#ifndef DESIGN_PATTERNS_MOTORDATA_H
#define DESIGN_PATTERNS_MOTORDATA_H

#include "HardwareProxyExample.h"

typedef struct MotorData MotorData;

struct MotorData {
    unsigned char on_off;
    DirectionType direction;
    unsigned int speed;
    unsigned char errorStatus;
    unsigned char noPowerError;
    unsigned char noTorqueError;
    unsigned char BITError;
    unsigned char overTemperatureError;
    unsigned char reservedError1;
    unsigned char reservedError2;
    unsigned char unknownError;
};

#endif // DESIGN_PATTERNS_MOTORDATA_H
