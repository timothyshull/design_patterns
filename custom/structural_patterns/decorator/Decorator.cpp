#include <iostream>
#include "Decorator.h"

Component::Component() {}

Component::~Component() {}

void Component::operation() {}

Concrete_component::Concrete_component() {}

Concrete_component::~Concrete_component() {}

void Concrete_component::operation()
{
    std::cout << "Concrete_component::operation()\n";
}

Decorator::Decorator(Component* com)
{
    this->_com = com;
}

Decorator::~Decorator()
{
    delete _com;
}

void Decorator::operation() {}

Concrete_decorator::Concrete_decorator(Component* com) : Decorator(com) {}

Concrete_decorator::~Concrete_decorator() {}

void Concrete_decorator::added_behavior()
{
    std::cout << "Concrete_decorator::added_behavior()\n";
}

void Concrete_decorator::operation()
{
    _com->operation();
    this->added_behavior();
}
