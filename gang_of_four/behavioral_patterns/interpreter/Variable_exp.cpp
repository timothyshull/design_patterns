#include <cstring>
#include "Variable_exp.h"

Variable_exp::Variable_exp(const char* name) : _name{strdup(name)} {}

Variable_exp::~Variable_exp() {}

bool Variable_exp::evaluate(Context& context)
{
    return context.lookup(_name);
}

Boolean_exp* Variable_exp::replace(const char* name, Boolean_exp& exp)
{
    if (strcmp(name, _name) != 0) {
        return exp.copy();
    } else {
        return new Variable_exp(_name);
    }
}

Boolean_exp* Variable_exp::copy() const
{
    return new Variable_exp(_name);
}
