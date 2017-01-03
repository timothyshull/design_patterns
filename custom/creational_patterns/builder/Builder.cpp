#include<iostream>
#include"Builder.h"
#include"Product.h"

Builder::Builder() {}

Builder::~Builder() {}

Concrete_builder::Concrete_builder() {}

Concrete_builder::~Concrete_builder() {}

void Concrete_builder::build_part_a(const std::string& build_parameter)
{
    std::cout << "Concrete_builder::build_part_a(" << build_parameter << ")\n";
}

void Concrete_builder::build_part_b(const std::string& build_parameter)
{
    std::cout << "Concrete_builder::build_part_b(" << build_parameter << "\n";
}

void Concrete_builder::build_part_c(const std::string& build_parameter)
{
    std::cout << "Concrete_builder::build_part_c(" << build_parameter << "\n";
}

Product* Concrete_builder::get_product()
{
    build_part_a("pre-defined");
    build_part_b("pre-defined");
    build_part_c("pre-defined");
    return new Product();
}
