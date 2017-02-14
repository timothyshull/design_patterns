#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

class Context;
//enum class Primitive_type {
//    boolean,
//    floating_point,
//    integer
//};

class Expression {
public:
    Expression();

    virtual ~Expression();

    // virtual bool evaluate(Context&) = 0;

    // virtual Expression* replace(const char*, Expression&) = 0;

    // virtual Expression* copy() const = 0;
};

#endif // EXPRESSION_H
