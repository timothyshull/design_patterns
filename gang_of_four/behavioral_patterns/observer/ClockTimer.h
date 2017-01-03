#ifndefsDESIGN_PATTERNS_CLOCK_TIMER_H
#definesDESIGN_PATTERNS_CLOCK_TIMER_H

#include "Subject.h"

class ClockTimer : public Subject {
public:
    ClockTimer();

    virtual int GetHour();
    virtual int GetMinute();
    virtual int GetSecond();

    void Tick();
};

#endif /* CLOCK_TIMER_H */
