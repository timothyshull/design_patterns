#include"Prototype.h"
#include<iostream>

Prototype::Prototype() {}

Prototype::~Prototype() {}

Prototype* Prototype::clone() const
{
    return nullptr;
}

Concrete_prototype::Concrete_prototype() {}

Concrete_prototype::~Concrete_prototype() {}

Concrete_prototype::Concrete_prototype(const Concrete_prototype& cp)
{
    std::cout << "Concrete_prototype::Concrete_prototype(const Concrete_prototype& cp)\n";
}

Prototype* Concrete_prototype::clone() const
{
    return new Concrete_prototype(*this);
}
