#include <iostream>
#include "Constant.h"

Constant::Constant(bool val) : _constant{val}
{
    std::cout << "Constant::Constant(" << std::boolalpha << val << ")\n";
}

Constant::~Constant()
{
    std::cout << "Constant::~Constant()\n";
}

bool Constant::evaluate(Context& context)
{
    return _constant;
}

Boolean_exp* Constant::replace(const char* name, Boolean_exp& exp)
{
    return new Constant(_constant);
}

Boolean_exp* Constant::copy() const
{
    return new Constant(_constant);
}
