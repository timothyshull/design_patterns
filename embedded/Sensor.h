#ifndef DESIGN_PATTERNS_SENSOR_H
#define DESIGN_PATTERNS_SENSOR_H

/*## class Sensor */
typedef struct Sensor Sensor;

struct Sensor {
    int filterFrequency;
    int updateFrequency;
    int value;
};

int Sensor_getFilterFrequency(const Sensor* const me);

void Sensor_setFilterFrequency(Sensor* const me, int p_filterFrequency);

int Sensor_getUpdateFrequency(const Sensor* const me);

void Sensor_setUpdateFrequency(Sensor* const me, int p_updateFrequency);

int Sensor_getValue(const Sensor* const me);

Sensor* Sensor_Create(void);

void Sensor_Destroy(Sensor* const me);

#endif // DESIGN_PATTERNS_SENSOR_H
