#ifndef DESIGN_PATTERNS_ATTITUDE_H
#define DESIGN_PATTERNS_ATTITUDE_H

#include "GuardedCallExample.h"

typedef struct Attitude Attitude;

struct Attitude {
    double pitch;
    double roll;
    double yaw;
};

/* Constructors and destructors:*/
void Attitude_Init(Attitude* const me);

void Attitude_Cleanup(Attitude* const me);

/* Operations */
double Attitude_getPitch(Attitude* const me);

double Attitude_getRoll(Attitude* const me);

double Attitude_getYaw(Attitude* const me);

void Attitude_setPitch(Attitude* const me, double x);

void Attitude_setRoll(Attitude* const me, double x);

void Attitude_setYaw(Attitude* const me, double x);

Attitude* Attitude_Create(void);

void Attitude_Destroy(Attitude* const me);

#endif // DESIGN_PATTERNS_ATTITUDE_H
