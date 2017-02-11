#ifndef CLOCK_TIMER_H
#define CLOCK_TIMER_H

#include "Subject.h"

class Clock_timer : public Subject {
public:
    Clock_timer();

    virtual int get_hour();

    virtual int get_minute();

    virtual int get_second();

    void tick();
};

#endif // CLOCK_TIMER_H
