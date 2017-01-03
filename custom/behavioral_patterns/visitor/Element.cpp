#include<iostream>
#include"Element.h"
#include"Visitor.h"

Element::Element() {}

Element::~Element() {}

void Element::accept(Visitor* vis) {}

Concrete_element_a::Concrete_element_a() {}

Concrete_element_a::~Concrete_element_a() {}

void Concrete_element_a::accept(Visitor* vis)
{
    std::cout << "visiting Concrete_element_a\n";
    vis->VisitConcreteElementA(this);
}

Concrete_element_b::Concrete_element_b() {}

Concrete_element_b::~Concrete_element_b() {}

void Concrete_element_b::accept(Visitor* vis)
{
    std::cout << "visiting Concrete_element_b\n";
    vis->VisitConcreteElementB(this);
}
