#ifndef DESIGN_PATTERNS_VARIABLE_EXPRESSION_H
#define DESIGN_PATTERNS_VARIABLE_EXPRESSION_H

#include <string>

#include "Expression.h"

class Variable_expression : public Expression {
public:
    Variable_expression(const std::string& name) : _name{name} {}

private:
    std::string _name;
};

#endif // DESIGN_PATTERNS_VARIABLE_EXPRESSION_H
