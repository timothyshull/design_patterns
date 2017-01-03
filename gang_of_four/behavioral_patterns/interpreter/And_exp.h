#ifndef DESIGN_PATTERNS_AND_EXP_H
#define DESIGN_PATTERNS_AND_EXP_H

#include"Boolean_exp.h"

class And_exp : public Boolean_exp {
public:
    And_exp(Boolean_exp*, Boolean_exp*);

    virtual ~And_exp();

    virtual bool evaluate(Context&);

    virtual Boolean_exp* replace(const char*, Boolean_exp&);

    virtual Boolean_exp* copy() const;

private:
    Boolean_exp* _operand1;
    Boolean_exp* _operand2;
};

#endif //DESIGN_PATTERNS_AND_EXP_H
