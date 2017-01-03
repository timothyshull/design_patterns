#ifndef _VISITOR_H_
#define _VISITOR_H_

class Concrete_element_a;

class Concrete_element_b;

class Element;

class Visitor {
public:
    virtual ~Visitor();

    virtual void VisitConcreteElementA(Element* elm) = 0;

    virtual void VisitConcreteElementB(Element* elm) = 0;

protected:
    Visitor();

private:
};

class ConcreteVisitorA : public Visitor {
public:
    ConcreteVisitorA();

    virtual ~ConcreteVisitorA();

    virtual void VisitConcreteElementA(Element* elm);

    virtual void VisitConcreteElementB(Element* elm);

protected:

private:
};

class ConcreteVisitorB : public Visitor {
public:
    ConcreteVisitorB();

    virtual ~ConcreteVisitorB();

    virtual void VisitConcreteElementA(Element* elm);

    virtual void VisitConcreteElementB(Element* elm);

protected:

private:
};

#endif //~_VISITOR_H_
