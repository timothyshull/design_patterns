#ifndef DESIGN_PATTERNS_GASDATA_H
#define DESIGN_PATTERNS_GASDATA_H

typedef struct GasData GasData;

struct GasData {
    unsigned short N2Conc;
    unsigned short O2Conc;
    unsigned int flowRate;
};

/* Constructors and destructors:*/
void GasData_Init(GasData* const me);

void GasData_Cleanup(GasData* const me);

GasData* GasData_Create(void);

void GasData_Destroy(GasData* const me);

#endif // DESIGN_PATTERNS_GASDATA_H
