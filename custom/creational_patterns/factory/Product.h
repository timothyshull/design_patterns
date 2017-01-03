#ifndef DESIGN_PATTERNS_PRODUCT_H
#define DESIGN_PATTERNS_PRODUCT_H

class Product {
public:
    virtual ~Product() = 0;

protected:
    Product();
};

class ConcreteProduct : public Product {
public:
    ~ConcreteProduct();

    ConcreteProduct();
};

#endif //DESIGN_PATTERNS_PRODUCT_H
