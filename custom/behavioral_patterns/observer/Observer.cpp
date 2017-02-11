#include <iostream>
#include <string>
#include "Observer.h"
#include "Subject.h"

Observer::Observer()
{
    _st = '\0';
}

Observer::~Observer() {}

Concrete_observer_a::Concrete_observer_a(Subject* sub)
{
    _sub = sub;
    _sub->attach(this);
}

Concrete_observer_a::~Concrete_observer_a()
{
    _sub->detach(this);
    if (_sub != 0) {
        delete _sub;
    }
}

Subject* Concrete_observer_a::get_subject()
{
    return _sub;
}

void Concrete_observer_a::print_info()
{
    std::cout << "Concrete_observer_a observer...." << _sub->get_state() << "\n";
}

void Concrete_observer_a::update(Subject* sub)
{
    _st = sub->get_state();
    print_info();
}

Concrete_observer_b::Concrete_observer_b(Subject* sub)
{
    _sub = sub;
    _sub->attach(this);
}

Concrete_observer_b::~Concrete_observer_b()
{
    _sub->detach(this);
    if (_sub != 0) {
        delete _sub;
    }
}

Subject* Concrete_observer_b::get_subject()
{

    return _sub;
}

void Concrete_observer_b::print_info()
{
    std::cout << "Concrete_observer_b observer...." << _sub->get_state() << "\n";
}

void Concrete_observer_b::update(Subject* sub)
{
    _st = sub->get_state();
    print_info();
}
