#include<iostream>
#include"Interpret.h"

Abstract_expression::Abstract_expression() {}

Abstract_expression::~Abstract_expression() {}

void Abstract_expression::interpret(const Context& c) {}

Terminal_expression::Terminal_expression(const std::string& statement) : _statement{statement} {}

Terminal_expression::~Terminal_expression() {}

void Terminal_expression::interpret(const Context& c)
{
    std::cout << "Terminal_expression _statement: " << this->_statement << "\n";
}

Nonterminal_expression::Nonterminal_expression(Abstract_expression* expression, int times)
{
    this->_expression = expression;
    this->_times = times;
}

Nonterminal_expression::~Nonterminal_expression() {}

void Nonterminal_expression::interpret(const Context& c)
{
    for (int i = 0; i < _times; i++) {
        this->_expression->interpret(c);
    }
}
