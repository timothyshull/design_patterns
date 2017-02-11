#ifndef DESIGN_PATTERNS_SUBJECT_H
#define DESIGN_PATTERNS_SUBJECT_H

#include <list>
#include <string>

using State = std::string;

class Observer;

class Subject {
public:
    virtual ~Subject();

    virtual void attach(Observer* obv);

    virtual void detach(Observer* obv);

    virtual void notify();

    virtual void set_state(const State& st) = 0;

    virtual State get_state() = 0;

protected:
    Subject();

private:
    std::list<Observer*>* _obvs;
};

class Concrete_subject : public Subject {
public:
    Concrete_subject();

    ~Concrete_subject();

    State get_state();

    void set_state(const State& st);

private:
    State _st;
};

#endif //DESIGN_PATTERNS_SUBJECT_H
