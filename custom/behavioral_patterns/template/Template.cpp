#include<iostream>
#include"Template.h"

Abstract_class::Abstract_class() {}

Abstract_class::~Abstract_class() {}

void Abstract_class::template_method()
{
    this->primitive_operation_1();
    this->primitive_operation_2();
}

Concrete_class_1::Concrete_class_1() {}

Concrete_class_1::~Concrete_class_1() {}

void Concrete_class_1::primitive_operation_1()
{
    std::cout << "Concrete_class_1::primitive_operation_1()\n";
}

void Concrete_class_1::primitive_operation_2()
{
    std::cout << "Concrete_class_1::primitive_operation_2()\n";
}

Concrete_class_2::Concrete_class_2() {}

Concrete_class_2::~Concrete_class_2() {}

void Concrete_class_2::primitive_operation_1()
{
    std::cout << "Concrete_class_2::primitive_operation_1()\n";
}

void Concrete_class_2::primitive_operation_2()
{
    std::cout << "Concrete_class_2::primitive_operation_2()\n";
}
