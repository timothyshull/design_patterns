#include"Mediator.h"
#include "Colleague.h"

Mediator::Mediator() {}

Mediator::~Mediator() {}

Concrete_mediator::Concrete_mediator() {}

Concrete_mediator::~Concrete_mediator() {}

Concrete_mediator::Concrete_mediator(Colleague* clgA, Colleague* clgB)
{
    this->_clg_a = clgA;
    this->_clg_b = clgB;
}

void Concrete_mediator::do_action_from_a_to_b()
{
    _clg_b->set_state(_clg_a->get_state());
}

void Concrete_mediator::set_concrete_colleague_a(Colleague* clgA)
{
    this->_clg_a = clgA;
}

void Concrete_mediator::set_concrete_colleague_b(Colleague* clgB)
{
    this->_clg_b = clgB;
}

Colleague* Concrete_mediator::get_concrete_colleague_a()
{
    return _clg_a;
}

Colleague* Concrete_mediator::get_concrete_colleague_b()
{
    return _clg_b;
}

void Concrete_mediator::introduce_colleagues(Colleague* clgA, Colleague* clgB)
{
    this->_clg_a = clgA;
    this->_clg_b = clgB;
}

void Concrete_mediator::do_action_from_b_to_a()
{
    _clg_a->set_state(_clg_b->get_state());
}
