#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
public:
    Product();

    ~Product();

    void produce_part();
};

class Product_part {
public:
    Product_part();

    ~Product_part();

    Product_part* build_part();
};

#endif //PRODUCT_H
