#include <iostream>
#include "Mediator.h"
#include "Colleague.h"

Colleague::Colleague() {}

Colleague::Colleague(Mediator* mdt) : _mdt{mdt} {}

Colleague::~Colleague() {}

Concrete_colleague_a::Concrete_colleague_a() {}

Concrete_colleague_a::~Concrete_colleague_a() {}

Concrete_colleague_a::Concrete_colleague_a(Mediator* mdt) : Colleague(mdt) {}

std::string Concrete_colleague_a::get_state()
{
    return _sdt;
}

void Concrete_colleague_a::set_state(const std::string& sdt)
{
    _sdt = sdt;
}

void Concrete_colleague_a::action()
{
    _mdt->do_action_from_a_to_b();
    std::cout << "State of Concrete_colleague_b:" << "" << this->get_state() << "\n";
}

Concrete_colleague_b::Concrete_colleague_b() {}

Concrete_colleague_b::~Concrete_colleague_b() {}

Concrete_colleague_b::Concrete_colleague_b(Mediator* mdt) : Colleague(mdt) {}

void Concrete_colleague_b::action()
{
    _mdt->do_action_from_b_to_a();
    std::cout << "State of Concrete_colleague_a:" << "" << this->get_state() << "\n";
}

std::string Concrete_colleague_b::get_state()
{
    return _sdt;
}

void Concrete_colleague_b::set_state(const std::string& sdt)
{
    _sdt = sdt;
}
