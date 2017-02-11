#ifndef DIGITAL_CLOCK_H
#define DIGITAL_CLOCK_H

#include "Widget.h"
#include "Observer.h"

class Clock_timer;

class Subject;

class Digital_clock : public Widget, public Observer {
public:
    Digital_clock(Clock_timer*);

    virtual ~Digital_clock();

    virtual void update(Subject*);
    // overrides observer operation

    virtual void draw();
    // overrides Widget operation;
    // defines how to draw the digital clock
private:
    Clock_timer* _subject;
};

#endif // DIGITAL_CLOCK_H
