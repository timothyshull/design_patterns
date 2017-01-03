#include<iostream>
#include"Abstraction.h"
#include"Abstraction_impl.h"

Abstraction::Abstraction() {}

Abstraction::~Abstraction() {}

Refined_abstraction::Refined_abstraction(Abstraction_impl* imp)
{
    _imp = imp;
}

Refined_abstraction::~Refined_abstraction() {}

void Refined_abstraction::operation()
{
    _imp->operation();
}
