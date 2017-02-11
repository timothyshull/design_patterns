#ifndef CONSTANT_H
#define CONSTANT_H

#include "Boolean_exp.h"

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

#endif //CONSTANT_H
