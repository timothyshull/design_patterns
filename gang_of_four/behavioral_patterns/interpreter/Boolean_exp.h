#ifndef DESIGN_PATTERNS_BOOLEAN_EXP_H
#define DESIGN_PATTERNS_BOOLEAN_EXP_H

#include"Context.h"

class Boolean_exp {
public:
    Boolean_exp();

    virtual ~Boolean_exp();

    virtual bool evaluate(Context&) = 0;

    virtual Boolean_exp* replace(const char*, Boolean_exp&) = 0;

    virtual Boolean_exp* copy() const = 0;
};

#endif //DESIGN_PATTERNS_BOOLEAN_EXP_H
