#ifndef OR_EXP_H
#define OR_EXP_H

#include "Boolean_exp.h"

class Or_exp : public Boolean_exp {
public:
    Or_exp(Boolean_exp*, Boolean_exp*);

    virtual ~Or_exp();

    virtual bool evaluate(Context&);

    virtual Boolean_exp* replace(const char*, Boolean_exp&);

    virtual Boolean_exp* copy() const;

private:
    Boolean_exp* _operand1;
    Boolean_exp* _operand2;
};

#endif //OR_EXP_H
