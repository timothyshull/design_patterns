#include <iostream>
#include "And_exp.h"

And_exp::And_exp(Boolean_exp* op1, Boolean_exp* op2) : _operand1{op1}, _operand2{op2}
{
    std::cout << "And_exp::And_exp(Boolean_exp*, Boolean_exp*)\n";
}

And_exp::~And_exp()
{
    std::cout << "And_exp::~And_exp()\n";
}

bool And_exp::evaluate(Context& context)
{
    return _operand1->evaluate(context) && _operand2->evaluate(context);
}

Boolean_exp* And_exp::replace(const char* name, Boolean_exp& exp)
{
    return new And_exp(_operand1->replace(name, exp), _operand2->replace(name, exp));
}

Boolean_exp* And_exp::copy() const
{
    return new And_exp(_operand1->copy(), _operand2->copy());
}
