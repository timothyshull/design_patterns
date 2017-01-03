#ifndef DESIGN_PATTERNS_CONTEXT_H
#define DESIGN_PATTERNS_CONTEXT_H

class Variable_exp;

class Context {
public:
    bool lookup(const char*) const;

    void assign(Variable_exp*, bool);
};

#endif //DESIGN_PATTERNS_CONTEXT_H
