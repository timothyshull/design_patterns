#ifndef DESIGN_PATTERNS_INTERPRET_H
#define DESIGN_PATTERNS_INTERPRET_H

#include <string>
#include "Context.h"

class Abstract_expression {
public:
    virtual ~Abstract_expression();

    virtual void interpret(const Context& c);

protected:
    Abstract_expression();
};

class Terminal_expression : public Abstract_expression {
public:
    Terminal_expression(const std::string& statement);

    ~Terminal_expression();

    void interpret(const Context& c);

private:
    std::string _statement;
};

class Nonterminal_expression : public Abstract_expression {
public:
    Nonterminal_expression(Abstract_expression* expression, int times);

    ~Nonterminal_expression();

    void interpret(const Context& c);

private:
    Abstract_expression* _expression;
    int _times;
};

#endif //DESIGN_PATTERNS_INTERPRET_H
