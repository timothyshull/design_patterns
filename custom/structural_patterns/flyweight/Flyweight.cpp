#include"Flyweight.h"
#include<iostream>

Flyweight::Flyweight(std::string intrinsicState)
{
    this->_intrinsic_state = intrinsicState;
}

Flyweight::~Flyweight() {}

void Flyweight::operation(const std::string& extrinsic_state) {}

std::string Flyweight::get_intrinsic_state()
{
    return this->_intrinsic_state;
}

Concrete_flyweight::Concrete_flyweight(std::string intrinsic_state) : Flyweight(intrinsic_state)
{
    std::cout << "Concrete_flyweight Build....." << intrinsic_state << "\n";
}

Concrete_flyweight::~Concrete_flyweight() {}

void Concrete_flyweight::operation(const std::string& extrinsic_state)
{
    std::cout << "Concrete_flyweight:operation(intrinsic_state: " << this->get_intrinsic_state() << ", extrinsic_state: "<< extrinsic_state << ")\n";
}
