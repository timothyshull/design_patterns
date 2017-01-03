#include<iostream>
#include"Factory.h"
#include"Product.h"

Factory::Factory() {}

Factory::~Factory() {}

Concrete_factory::Concrete_factory()
{
    std::cout << "Concrete_factory()\n";
}

Concrete_factory::~Concrete_factory() {}

Product* Concrete_factory::create_product()
{
    return new ConcreteProduct();
}
