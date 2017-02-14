#ifndef PRODUCT_H
#define PRODUCT_H

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

#endif //PRODUCT_H
