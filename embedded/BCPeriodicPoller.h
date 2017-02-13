#ifndef DESIGN_PATTERNS_BCPERIODICPOLLER_H
#define DESIGN_PATTERNS_BCPERIODICPOLLER_H

typedef int deviceData;

typedef void (* timerVectorPtr)(void);

#define MAX_POLL_DEVICES (10)
#define DEFAULT_POLL_TIME (1000)
struct BCTimer;
struct BreathingCircuitSensor;
struct MedicalDisplay;

typedef struct BCPeriodicPoller BCPeriodicPoller;

struct BCPeriodicPoller {
    unsigned long pollTime;
    struct BCTimer* itsBCTimer;
    struct BreathingCircuitSensor* itsBreathingCircuitSensor[3];
    struct MedicalDisplay* itsMedicalDisplay;
};

void BCPeriodicPoller_Init(BCPeriodicPoller* const me);

void BCPeriodicPoller_Cleanup(BCPeriodicPoller* const me);

/* Operations */ void BCPeriodicPoller_poll(BCPeriodicPoller* const me);

void BCPeriodicPoller_setPollTime(BCPeriodicPoller* const me, unsigned long t);

void BCPeriodicPoller_startPolling(BCPeriodicPoller* const me);

void BCPeriodicPoller_stopPolling(BCPeriodicPoller* const me);

struct BCTimer* BCPeriodicPoller_getItsBCTimer(const BCPeriodicPoller* const me);

void BCPeriodicPoller_setItsBCTimer(BCPeriodicPoller* const me, struct BCTimer* p_BCTimer);

int BCPeriodicPoller_getItsBreathingCircuitSensor(const BCPeriodicPoller* const me);

void BCPeriodicPoller_addItsBreathingCircuitSensor(BCPeriodicPoller* const me, struct BreathingCircuitSensor* p_BreathingCircuitSensor);

void BCPeriodicPoller_removeItsBreathingCircuitSensor(BCPeriodicPoller* const me, struct BreathingCircuitSensor* p_BreathingCircuitSensor);

void BCPeriodicPoller_clearItsBreathingCircuitSensor(BCPeriodicPoller* const me);

struct MedicalDisplay* BCPeriodicPoller_getItsMedicalDisplay(const BCPeriodicPoller* const me);

void BCPeriodicPoller_setItsMedicalDisplay(BCPeriodicPoller* const me, struct MedicalDisplay* p_MedicalDisplay);

BCPeriodicPoller* BCPeriodicPoller_Create(void);

void BCPeriodicPoller_Destroy(BCPeriodicPoller* const me);

void BCPeriodicPoller___setItsBCTimer(BCPeriodicPoller* const me, struct BCTimer* p_BCTimer);

void BCPeriodicPoller__setItsBCTimer(BCPeriodicPoller* const me, struct BCTimer* p_BCTimer);

void BCPeriodicPoller__clearItsBCTimer(BCPeriodicPoller* const me);

#endif // DESIGN_PATTERNS_BCPERIODICPOLLER_H
