#include<iostream>
#include<list>
#include"Subject.h"
#include"Observer.h"

Subject::Subject()
{
    _obvs = new std::list<Observer*>;
}

Subject::~Subject() {}

void Subject::attach(Observer* obv)
{
    _obvs->push_front(obv);
}

void Subject::detach(Observer* obv)
{
    if (obv != nullptr) {
        _obvs->remove(obv);
    }
}

void Subject::notify()
{
    std::list<Observer*>::iterator it;
    it = _obvs->begin();
    for (; it != _obvs->end(); it++) {
        (*it)->update(this);
    }
}

Concrete_subject::Concrete_subject()
{
    _st = '\0';
}

Concrete_subject::~Concrete_subject() {}

State Concrete_subject::get_state()
{
    return _st;
}

void Concrete_subject::set_state(const State& st)
{
    _st = st;
}
