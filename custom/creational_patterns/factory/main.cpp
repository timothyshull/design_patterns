#include <iostream>
#include "Factory.h"
#include "Product.h"

int main(int argc, char* argv[])
{
    Factory* fac = new Concrete_factory();
    Product* p = fac->create_product();
    return 0;
}
