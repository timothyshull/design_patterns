#include<iostream>
#include"Abstraction_impl.h"

Abstraction_impl::Abstraction_impl() {}

Abstraction_impl::~Abstraction_impl() {}

void Abstraction_impl::operation()
{
    std::cout << "Abstraction_impl::operation()\n";
}

Concrete_abstraction_impl_a::Concrete_abstraction_impl_a() {}

Concrete_abstraction_impl_a::~Concrete_abstraction_impl_a() {}

void Concrete_abstraction_impl_a::operation()
{
    std::cout << "Concrete_abstraction_impl_a::operation()\n";
}

Concrete_abstraction_impl_b::Concrete_abstraction_impl_b() {}

Concrete_abstraction_impl_b::~Concrete_abstraction_impl_b() {}

void Concrete_abstraction_impl_b::operation()
{
    std::cout << "Concrete_abstraction_impl_b::operation()\n";
}
