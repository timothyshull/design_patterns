#ifndef DESIGN_PATTERNS_GASDATA_QUEUING_H
#define DESIGN_PATTERNS_GASDATA_QUEUING_H

#include "QueuingExample.h"

typedef struct GasData GasData;

struct GasData {
    double conc;
    unsigned int flowInCCPerMin;
    GAS_TYPE gType;
};

/* Constructors and destructors:*/
void GasData_Init(GasData* const me);

void GasData_Cleanup(GasData* const me);

GasData* GasData_Create(void);

void GasData_Destroy(GasData* const me);

#endif // DESIGN_PATTERNS_GASDATA_QUEUING_H
