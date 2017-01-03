#ifndef DESIGN_PATTERNS_VARIABLE_EXP_H
#define DESIGN_PATTERNS_VARIABLE_EXP_H

#include"Boolean_exp.h"

class Variable_exp : public Boolean_exp {
public:
    Variable_exp(const char*);

    virtual ~Variable_exp();

    virtual bool evaluate(Context&);

    virtual Boolean_exp* replace(const char*, Boolean_exp&);

    virtual Boolean_exp* copy() const;

private:
    char* _name;
};

#endif //DESIGN_PATTERNS_VARIABLE_EXP_H
