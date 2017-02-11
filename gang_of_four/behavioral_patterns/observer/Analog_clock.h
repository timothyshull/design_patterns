#ifndef ANALOG_CLOCK_H
#define ANALOG_CLOCK_H

#include "Clock_timer.h"
#include "Observer.h"
#include "Widget.h"

class Analog_clock : public Widget, public Observer {
public:
    Analog_clock(Clock_timer*);

    virtual void update(Subject*);

    virtual void draw();
    // ...
};

#endif // ANALOG_CLOCK_H
