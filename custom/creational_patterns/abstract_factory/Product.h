#ifndef PRODUCT_H
#define PRODUCT_H

class Abstract_product_a {
public:
    virtual ~Abstract_product_a();

    virtual void show() = 0;

protected:
    Abstract_product_a();
};

class Abstract_product_b {
public:
    virtual ~Abstract_product_b();

    virtual void show() = 0;

protected:
    Abstract_product_b();
};

class Product_a1 : public Abstract_product_a {
public:
    Product_a1();

    ~Product_a1();

    void show();
};

class Product_a2 : public Abstract_product_a {
public:
    Product_a2();

    ~Product_a2();

    void show();
};

class Product_b1 : public Abstract_product_b {
public:
    Product_b1();

    ~Product_b1();

    void show();
};

class Product_b2 : public Abstract_product_b {
public:
    Product_b2();

    ~Product_b2();

    void show();
};

#endif //PRODUCT_H
