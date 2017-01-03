#include<iostream>
#include"Not_exp.h"

Not_exp::Not_exp(Boolean_exp* op) : _operand{op}
{
    std::cout << "Not_exp::Not_exp(Boolean_exp* op)\n";
}

Not_exp::~Not_exp()
{
    std::cout << "Not_exp::~Not_exp()\n";
}

bool Not_exp::evaluate(Context& context)
{
    return !_operand->evaluate(context);
}

Boolean_exp* Not_exp::replace(const char* name, Boolean_exp& exp)
{
    return new Not_exp(_operand->replace(name, exp));
}

Boolean_exp* Not_exp::copy() const
{
    return new Not_exp(_operand->copy());
}
