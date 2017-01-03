#ifndef DESIGN_PATTERNS_CONSTANT_H
#define DESIGN_PATTERNS_CONSTANT_H

#include"Boolean_exp.h"

class Constant : public Boolean_exp {
public:
    Constant(bool);

    virtual ~Constant();

    virtual bool evaluate(Context&);

    virtual Boolean_exp* replace(const char*, Boolean_exp&);

    virtual Boolean_exp* copy() const;

private:
    bool _constant;
};

#endif //DESIGN_PATTERNS_CONSTANT_H
