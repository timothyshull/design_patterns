#ifndef ABSTRACTION_IMPL_H
#define ABSTRACTION_IMPL_H

class Abstraction_impl {
public:
    virtual ~Abstraction_impl();

    virtual void operation() = 0;

protected:
    Abstraction_impl();
};

class Concrete_abstraction_impl_a : public Abstraction_impl {
public:
    Concrete_abstraction_impl_a();

    ~Concrete_abstraction_impl_a();

    virtual void operation();
};

class Concrete_abstraction_impl_b : public Abstraction_impl {
public:
    Concrete_abstraction_impl_b();

    ~Concrete_abstraction_impl_b();

    virtual void operation();
};

#endif //ABSTRACTION_IMPL_H
