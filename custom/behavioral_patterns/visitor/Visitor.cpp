#include "Visitor.h"
#include "Element.h"
#include <iostream>

using namespace std;

Visitor::Visitor()
{
}

Visitor::~Visitor()
{
}

ConcreteVisitorA::ConcreteVisitorA()
{
}

ConcreteVisitorA::~ConcreteVisitorA()
{
}

void ConcreteVisitorA::VisitConcreteElementA(Element* elm)
{
    cout << "i will visit Concrete_element_a..." << "\n";
}

void ConcreteVisitorA::VisitConcreteElementB(Element* elm)
{
    cout << "i will visit Concrete_element_b..." << "\n";
}

ConcreteVisitorB::ConcreteVisitorB()
{
}

ConcreteVisitorB::~ConcreteVisitorB()
{
}

void ConcreteVisitorB::VisitConcreteElementA(Element* elm)
{
    cout << "i will visit Concrete_element_a..." << "\n";
}

void ConcreteVisitorB::VisitConcreteElementB(Element* elm)
{
    cout << "i will visit Concrete_element_b..." << "\n";
}
