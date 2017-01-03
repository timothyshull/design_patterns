#include "EnchantedMazeFactory.h"
#include "Spell.h"

#include <iostream>

EnchantedMazeFactory::EnchantedMazeFactory()
{
    std::cout << "EnchantedMazeFactory::EnchantedMazeFactory()" << "\n";
}

Spell* EnchantedMazeFactory::CastSpell() const
{
    std::cout << "EnchantedMazeFactory::CastSpell()" << "\n";

    return new Spell;
}
