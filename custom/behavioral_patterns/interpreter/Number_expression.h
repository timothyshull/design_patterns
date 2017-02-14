#ifndef DESIGN_PATTERNS_NUMBER_EXPRESSION_H
#define DESIGN_PATTERNS_NUMBER_EXPRESSION_H

#include "Expression.h"

class Number_expression : public Expression {
public:
    Number_expression(double val) : _value{val} {}

private:
    double _value;
};

#endif // DESIGN_PATTERNS_NUMBER_EXPRESSION_H
