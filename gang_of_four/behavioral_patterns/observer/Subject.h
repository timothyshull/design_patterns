#ifndef SUBJECT_H
#define SUBJECT_H

#include "List.h"

class Observer;

class Subject {
public:
    virtual ~Subject();

    virtual void attach(Observer*);

    virtual void detach(Observer*);

    virtual void notify();

protected:
    Subject();

private:
    List<Observer*>* _observers;
};

#endif // SUBJECT_H
