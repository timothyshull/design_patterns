#include "Sensor.h"

int acquireValue(Sensor* me)
{
    int* r, * w; /* read and write addresses */
    int j;
    switch (me->whatKindOfInterface) {
        case MEMORYMAPPED:
            w = (int*) WRITEADDR; /* address to write to sensor */
            *w = WRITEMASK; /* sensor command to force a read */
            for (j = 0; j < 100; j++) { /* wait loop */ };
            r = (int*) READADDR; /* address of returned value */
            me->value = *r;
            break;
        case PORTMAPPED:
            me->value = inp(SENSORPORT);
            /* inp() is a compiler-specific port function */
            break;
    }; /* end switch */
    return me->value;
};