#ifndef DESIGN_PATTERNS_CALL_EXPRESSION_H
#define DESIGN_PATTERNS_CALL_EXPRESSION_H

#include <string>
#include <vector>

#include "Expression.h"

class Call_expression : public Expression {
public:
    Call_expression(const std::string& callee, std::vector<std::unique_ptr<Expression>> args) : _callee{callee}, _args{std::move(args)} {}

private:
    std::string _callee;
    std::vector<std::unique_ptr<Expression>> _args;
};

#endif // DESIGN_PATTERNS_CALL_EXPRESSION_H
