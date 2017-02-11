#include <iostream>
#include "Memento.h"

Originator::Originator() : _sdt{""}, _mt{nullptr} {}

Originator::Originator(const State& sdt) : _sdt{sdt}, _mt{nullptr} {}

Originator::~Originator() {}

Memento* Originator::create_memento()
{
    return new Memento(_sdt);
}

State Originator::get_state()
{
    return _sdt;
}

void Originator::set_state(const State& sdt)
{
    _sdt = sdt;
}

void Originator::print_state()
{
    std::cout << this->_sdt << "\n";
}

void Originator::set_memento(Memento* men) {}

void Originator::restore_to_memento(Memento* mt)
{
    this->_sdt = mt->get_state();
}

Memento::Memento() {}

Memento::Memento(const State& sdt)
{
    _sdt = sdt;
}

State Memento::get_state()
{
    return _sdt;
}

void Memento::set_state(const State& sdt)
{
    _sdt = sdt;
}
