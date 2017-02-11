#include <iostream>
#include "Product.h"

Product::Product()
{
    std::cout << "Product()\n";
    produce_part();
}

Product::~Product() {}

void Product::produce_part()
{
    std::cout << "Product::produce_part()\n";
}

Product_part::Product_part() {}

Product_part::~Product_part() {}

Product_part* Product_part::build_part()
{
    return new Product_part;
}
