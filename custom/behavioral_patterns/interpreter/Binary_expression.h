#ifndef DESIGN_PATTERNS_BINARY_EXPRESSION_H
#define DESIGN_PATTERNS_BINARY_EXPRESSION_H

#include "Expression.h"
#include "token.h"

class Binary_expression : public Expression {
public:
    Binary_expression(Token_class op, std::unique_ptr<Expression> lhs, std::unique_ptr<Expression> rhs)
            : _operator{op},
              _lhs{std::move(lhs)},
              _rhs{std::move(rhs)} {}

private:
    Token_class _operator;
    std::unique_ptr<Expression> _lhs;
    std::unique_ptr<Expression> _rhs;
};

#endif // DESIGN_PATTERNS_BINARY_EXPRESSION_H
