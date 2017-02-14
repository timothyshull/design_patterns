#ifndef FACTORY_H
#define FACTORY_H

class Product;

class Factory {
public:
    virtual ~Factory() = 0;

    virtual Product* create_product() = 0;

protected:
    Factory();
};

class Concrete_factory : public Factory {
public:
    ~Concrete_factory();

    Concrete_factory();

    Product* create_product();
};

#endif //FACTORY_H
