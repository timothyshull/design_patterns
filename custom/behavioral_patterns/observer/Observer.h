#ifndef DESIGN_PATTERNS_OBSERVER_H
#define DESIGN_PATTERNS_OBSERVER_H

#include <string>
#include "Subject.h"

using State = std::string;

class Observer {
public:
    virtual ~Observer();

    virtual void update(Subject* changed_subject) = 0;

    virtual void print_info() = 0;

protected:
    Observer();

    State _st;
};

class Concrete_observer_a : public Observer {
public:
    virtual Subject* get_subject();

    Concrete_observer_a(Subject* sub);

    virtual ~Concrete_observer_a();

    void update(Subject* sub);

    void print_info();

private:
    Subject* _sub;
};

class Concrete_observer_b : public Observer {
public:
    virtual Subject* get_subject();

    Concrete_observer_b(Subject* sub);

    virtual ~Concrete_observer_b();

    void update(Subject* sub);

    void print_info();

private:
    Subject* _sub;
};

#endif //DESIGN_PATTERNS_OBSERVER_H
