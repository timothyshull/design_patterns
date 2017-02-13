#ifndef DESIGN_PATTERNS_OWNSHIPATTITUDE_H
#define DESIGN_PATTERNS_OWNSHIPATTITUDE_H

#include "AttitudeDataType.h"

struct AlarmManager;

typedef struct OwnShipAttitude OwnShipAttitude;

struct OwnShipAttitude {
    struct AttitudeDataType attitude;
    struct AttitudeDataType invertedAttitude;
    struct AlarmManager* itsAlarmManager;
};

void OwnShipAttitude_Init(OwnShipAttitude* const me);

void OwnShipAttitude_Cleanup(OwnShipAttitude* const me);

/* Operations */
void OwnShipAttitude_errorHandler(OwnShipAttitude* const me);

int OwnShipAttitude_getAttitude(OwnShipAttitude* const me, AttitudeDataType* aPtr);

AttitudeDataType OwnShipAttitude_invert(OwnShipAttitude* const me, AttitudeDataType a);

void OwnShipAttitude_setAttitude(OwnShipAttitude* const me, AttitudeDataType a);

struct AlarmManager* OwnShipAttitude_getItsAlarmManager(const OwnShipAttitude* const me);

void OwnShipAttitude_setItsAlarmManager(OwnShipAttitude* const me, struct AlarmManager* p_AlarmManager);

OwnShipAttitude* OwnShipAttitude_Create(void);

void OwnShipAttitude_Destroy(OwnShipAttitude* const me);

#endif // DESIGN_PATTERNS_OWNSHIPATTITUDE_H
