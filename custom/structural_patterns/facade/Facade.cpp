#include <iostream>
#include "Facade.h"

Subsystem_1::Subsystem_1() {}

Subsystem_1::~Subsystem_1() {}

void Subsystem_1::operation()
{
    std::cout << "Subsystem_2::operation()\n";
}

Subsystem_2::Subsystem_2() {}

Subsystem_2::~Subsystem_2() {}

void Subsystem_2::operation()
{
    std::cout << "Subsystem_2::operation()\n";
}

Facade::Facade()
{
    this->_subs1 = new Subsystem_1();
    this->_subs2 = new Subsystem_2();
}

Facade::~Facade()
{
    delete _subs1;
    delete _subs2;
}

void Facade::operation_wrapper()
{
    this->_subs1->operation();
    this->_subs2->operation();
}
