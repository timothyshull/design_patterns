#ifndef BOOLEAN_EXP_H
#define BOOLEAN_EXP_H

#include "Context.h"

class Boolean_exp {
public:
    Boolean_exp();

    virtual ~Boolean_exp();

    virtual bool evaluate(Context&) = 0;

    virtual Boolean_exp* replace(const char*, Boolean_exp&) = 0;

    virtual Boolean_exp* copy() const = 0;
};

#endif //BOOLEAN_EXP_H
