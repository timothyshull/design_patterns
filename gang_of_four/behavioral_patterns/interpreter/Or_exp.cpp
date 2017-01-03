#include<iostream>
#include"Or_exp.h"

Or_exp::Or_exp(Boolean_exp* op1, Boolean_exp* op2) : _operand1{op1}, _operand2{op2}
{
    std::cout << "Or_exp::Or_exp(Boolean_exp*, Boolean_exp*)\n";
}

Or_exp::~Or_exp()
{
    std::cout << "Or_exp::~Or_exp()\n";
}

bool Or_exp::evaluate(Context& context)
{
    return _operand1->evaluate(context) || _operand2->evaluate(context);
}

Boolean_exp* Or_exp::replace(const char* name, Boolean_exp& exp)
{
    return new Or_exp(_operand1->replace(name, exp), _operand2->replace(name, exp));
}

Boolean_exp* Or_exp::copy() const
{
    return new Or_exp(_operand1->copy(), _operand2->copy());
}
