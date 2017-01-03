#include<iostream>
#include"Context.h"

bool Context::lookup(const char* str) const
{
    std::cout << "Context::lookup(" << str << ")\n";
    return false;
}

void Context::assign(Variable_exp*, bool t_or_f)
{
    std::cout << "Context::assign(Variable_exp*, " << std::boolalpha << t_or_f << ")\n";
}
