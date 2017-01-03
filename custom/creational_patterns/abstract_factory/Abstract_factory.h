#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_H
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_H

class Abstract_product_a;

class Abstract_product_b;

class Abstract_factory {
public:
    virtual ~Abstract_factory();

    virtual Abstract_product_a* create_product_a() = 0;

    virtual Abstract_product_b* create_product_b() = 0;

protected:
    Abstract_factory();
};

class Concrete_factory_1 : public Abstract_factory {
public:
    Concrete_factory_1();

    ~Concrete_factory_1();

    Abstract_product_a* create_product_a();

    Abstract_product_b* create_product_b();
};

class Concrete_factory_2 : public Abstract_factory {
public:
    Concrete_factory_2();

    ~Concrete_factory_2();

    Abstract_product_a* create_product_a();

    Abstract_product_b* create_product_b();
};

#endif //DESIGN_PATTERNS_ABSTRACT_FACTORY_H
