#ifndef DESIGN_PATTERNS_PRODUCT_H
#define DESIGN_PATTERNS_PRODUCT_H

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

#endif //DESIGN_PATTERNS_PRODUCT_H
