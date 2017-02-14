#ifndef CONTEXT_H
#define CONTEXT_H

#include <map>
#include <iostream>

#include "Expression.h"

//class Expression;

class Context {
public:
    Expression* lookup(std::string&& var_name) const
    {
        std::cout << "Context::lookup(" << var_name << ")\n";
        std::map<std::string, Expression*>::const_iterator it = _symbols.find(var_name);
        if (it == _symbols.end()) { return {}; }
        return it->second;
    }

    inline void assign(std::string&& var_name, Expression* expression) { _symbols.emplace(var_name, expression); };

    inline void set_operator_precedence(const char ch, const int precedence) { _binary_op_precedence[ch] = precedence; }

    inline int get_operator_precedence(const char ch) { return _binary_op_precedence.at(ch); }

private:
    std::map<std::string, Expression*> _symbols;
    std::map<char, int> _binary_op_precedence;
};

#endif //CONTEXT_H
