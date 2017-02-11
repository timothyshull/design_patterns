#ifndef CONTEXT_H
#define CONTEXT_H

class Variable_exp;

class Context {
public:
    bool lookup(const char*) const;

    void assign(Variable_exp*, bool);
};

#endif //CONTEXT_H
