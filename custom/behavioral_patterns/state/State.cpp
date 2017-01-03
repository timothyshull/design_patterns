#include<iostream>
#include"State.h"
#include"Context.h"

State::State() {}

State::~State() {}

void State::operation_interface(Context* con)
{
    std::cout << "State::operation_interface()" << "\n";
}

bool State::change_state(Context* con, State* st)
{
    con->change_state(st);
    return true;
}

void State::operation_change_state(Context* con) {}

Concrete_state_a::Concrete_state_a() {}

Concrete_state_a::~Concrete_state_a() {}

void Concrete_state_a::operation_interface(Context* con)
{
    std::cout << "Concrete_state_a::operation_interface()\n";
}

void Concrete_state_a::operation_change_state(Context* con)
{
    operation_interface(con);
    this->change_state(con, new Concrete_state_b());
}

Concrete_state_b::Concrete_state_b() {}

Concrete_state_b::~Concrete_state_b() {}

void Concrete_state_b::operation_interface(Context* con)
{
    std::cout << "Concrete_state_b::operation_interface()\n";
}

void Concrete_state_b::operation_change_state(Context* con)
{
    operation_interface(con);
    this->change_state(con, new Concrete_state_a());
}
