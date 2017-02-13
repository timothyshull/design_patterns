#ifndef DESIGN_PATTERNS_SENSORTHREAD_H
#define DESIGN_PATTERNS_SENSORTHREAD_H

/* ... initial declaratons stuff above ... */
typedef struct SensorThread SensorThread;

struct SensorThread {
    struct GasDataQueue* itsGasDataQueue;
    struct HeSensor itsHeSensor;
    struct N2Sensor itsN2Sensor;
    struct O2Sensor itsO2Sensor;
};

/* Operations */
void SensorThread_updateData(SensorThread* const me);
/* ... other operations here ... */

#endif // DESIGN_PATTERNS_SENSORTHREAD_H
