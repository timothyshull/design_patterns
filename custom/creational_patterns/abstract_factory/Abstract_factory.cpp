#include <iostream>
#include "Abstract_factory.h"
#include "Product.h"

Abstract_factory::Abstract_factory() {}

Abstract_factory::~Abstract_factory() {}

Concrete_factory_1::Concrete_factory_1() {}

Concrete_factory_1::~Concrete_factory_1() {}

Abstract_product_a* Concrete_factory_1::create_product_a()
{
    return new Product_a1();
}

Abstract_product_b* Concrete_factory_1::create_product_b()
{
    return new Product_b1();
}

Concrete_factory_2::Concrete_factory_2() {}

Concrete_factory_2::~Concrete_factory_2() {}

Abstract_product_a* Concrete_factory_2::create_product_a()
{
    return new Product_a2();
}

Abstract_product_b* Concrete_factory_2::create_product_b()
{
    return new Product_b2();
}
