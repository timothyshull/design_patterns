#ifndef ELEMENT_H
#define ELEMENT_H

class Visitor;

class Element {
public:
    virtual ~Element();

    virtual void accept(Visitor* vis) = 0;

protected:
    Element();
};

class Concrete_element_a : public Element {
public:
    Concrete_element_a();

    ~Concrete_element_a();

    void accept(Visitor* vis);
};

class Concrete_element_b : public Element {
public:
    Concrete_element_b();

    ~Concrete_element_b();

    void accept(Visitor* vis);
};

#endif //ELEMENT_H
