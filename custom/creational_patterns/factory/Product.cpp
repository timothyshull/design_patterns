#include <iostream>
#include "Product.h"

Product::Product() {}

Product::~Product() {}

ConcreteProduct::ConcreteProduct()
{
    std::cout << "ConcreteProduct()\n";
}

ConcreteProduct::~ConcreteProduct() {}
