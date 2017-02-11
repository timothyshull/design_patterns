#include <iostream>
#include "Strategy.h"

Strategy::Strategy() {}

Strategy::~Strategy() {}

void Strategy::algorithm_interface() {}

Concrete_strategy_a::Concrete_strategy_a() {}

Concrete_strategy_a::~Concrete_strategy_a()
{
    std::cout << "Concrete_strategy_a()\n";
}

void Concrete_strategy_a::algorithm_interface()
{
    std::cout << "Concrete_strategy_a::algorithm_interface()\n";
}

Concrete_strategy_b::Concrete_strategy_b() {}

Concrete_strategy_b::~Concrete_strategy_b()
{
    std::cout << "Concrete_strategy_b()\n";
}

void Concrete_strategy_b::algorithm_interface()
{
    std::cout << "Concrete_strategy_b::algorithm_interface()\n";
}
