#include "Digital_clock.h"
#include "Clock_timer.h"
#include <iostream>

Digital_clock::Digital_clock(Clock_timer* s)
{
    _subject = s;
    _subject->attach(this);
}

Digital_clock::~Digital_clock()
{
    _subject->detach(this);
}

void Digital_clock::update(Subject* theChangedSubject)
{
    if (theChangedSubject == _subject) {
        draw();
    }
}

void Digital_clock::draw()
{
    // get the new values from the subject

    int hour = _subject->get_hour();
    int minute = _subject->get_minute();
    // etc.

    // draw the digital clock
    std::cout << hour << ":" << minute << "\n";
}
