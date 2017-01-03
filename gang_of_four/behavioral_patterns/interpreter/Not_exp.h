#ifndef DESIGN_PATTERNS_NOT_EXP_H
#define DESIGN_PATTERNS_NOT_EXP_H

#include"Boolean_exp.h"

class Not_exp : public Boolean_exp {
public:
    Not_exp(Boolean_exp*);

    virtual ~Not_exp();

    virtual bool evaluate(Context&);

    virtual Boolean_exp* replace(const char*, Boolean_exp&);

    virtual Boolean_exp* copy() const;

private:
    Boolean_exp* _operand;
};

#endif //DESIGN_PATTERNS_NOT_EXP_H
