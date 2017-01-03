#include<iostream>
#include"Abstract_factory.h"
#include"Product.h"

int main(int argc, char* argv[])
{
    Abstract_factory* cf1 = new Concrete_factory_1();
    Abstract_product_a* a1 = cf1->create_product_a();
    a1->show();
    Abstract_product_b* b1 = cf1->create_product_b();
    b1->show();

    Abstract_factory* cf2 = new Concrete_factory_2();
    Abstract_product_a* a2 = cf2->create_product_a();
    a2->show();
    Abstract_product_b* b2 = cf2->create_product_b();
    b2->show();
    return 0;
}
