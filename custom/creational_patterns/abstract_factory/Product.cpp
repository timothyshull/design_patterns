#include "Product.h"
#include <iostream>

Abstract_product_a::Abstract_product_a() {}

Abstract_product_a::~Abstract_product_a() {}

Abstract_product_b::Abstract_product_b() {}

Abstract_product_b::~Abstract_product_b() {}

void Product_a1::show()
{
    std::cout << "Product_a1::show()\n";
}

Product_a1::Product_a1()
{
    std::cout << "Product_a1()\n";
}

Product_a1::~Product_a1() {}

void Product_a2::show()
{
    std::cout << "Product_a2::show()\n";
}

Product_a2::Product_a2()
{
    std::cout << "Product_a2()\n";
}

Product_a2::~Product_a2() {}

void Product_b1::show()
{
    std::cout << "Product_b1::show()\n";
}

Product_b1::Product_b1()
{
    std::cout << "Product_b1()\n";
}

Product_b1::~Product_b1() {}

void Product_b2::show()
{
    std::cout << "Product_b2::show()\n";
}

Product_b2::Product_b2()
{
    std::cout << "Product_b2()\n";
}

Product_b2::~Product_b2() {}

