#include <iostream>
#include "Handle.h"

Handle::Handle() : _succ{nullptr} {}

Handle::~Handle()
{
    delete _succ;
}

Handle::Handle(Handle* succ) : _succ{succ} {}

void Handle::set_successor(Handle* succ)
{
    _succ = succ;
}

Handle* Handle::get_successor()
{
    return _succ;
}

void Handle::handle_request() {}

Concrete_handle_a::Concrete_handle_a() {}

Concrete_handle_a::Concrete_handle_a(Handle* succ) : Handle(succ) {}

Concrete_handle_a::~Concrete_handle_a() {}

void Concrete_handle_a::handle_request()
{
    if (this->get_successor() != nullptr) {
        std::cout << "Concrete_handle_a get_successor() returned a valid pointer ... handling request ...\n";
        this->get_successor()->handle_request();
    } else {
        std::cerr << "Concrete_handle_a get_successor() failed ... unable to handle request.\n";
    }
}

Concrete_handle_b::Concrete_handle_b() {}

Concrete_handle_b::Concrete_handle_b(Handle* succ) : Handle(succ) {}

Concrete_handle_b::~Concrete_handle_b() {}

void Concrete_handle_b::handle_request()
{
    if (this->get_successor() != nullptr) {
        std::cout << "Concrete_handle_b get_successor() returned a valid pointer ... handling request ...\n";
        this->get_successor()->handle_request();
    } else {
        std::cerr << "Concrete_handle_b get_successor() failed ... unable to handle request.\n";
    }
}
