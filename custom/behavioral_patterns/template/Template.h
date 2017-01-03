#ifndef DESIGN_PATTERNS_TEMPLATE_H
#define DESIGN_PATTERNS_TEMPLATE_H

class Abstract_class {
public:
    virtual ~Abstract_class();

    void template_method();

protected:
    virtual void primitive_operation_1() = 0;

    virtual void primitive_operation_2() = 0;

    Abstract_class();
};

class Concrete_class_1 : public Abstract_class {
public:
    Concrete_class_1();

    ~Concrete_class_1();

protected:
    void primitive_operation_1();

    void primitive_operation_2();
};

class Concrete_class_2 : public Abstract_class {
public:
    Concrete_class_2();

    ~Concrete_class_2();

protected:
    void primitive_operation_1();

    void primitive_operation_2();
};

#endif //DESIGN_PATTERNS_TEMPLATE_H
