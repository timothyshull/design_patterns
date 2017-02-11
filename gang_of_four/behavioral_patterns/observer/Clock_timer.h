#ifndef CLOCK_TIMER_H
#define CLOCK_TIMER_H

#include "Subject.h"

class Clock_timer : public Subject {
public:
    Clock_timer() = 0;

    virtual int get_hour() = 0;

    virtual int get_minute() = 0;

    virtual int get_second() = 0;

    void tick();
};

#endif // CLOCK_TIMER_H
