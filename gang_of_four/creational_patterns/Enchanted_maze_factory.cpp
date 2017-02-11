#include "Enchanted_maze_factory.h"
#include "Spell.h"

#include <iostream>

Enchanted_maze_factory::Enchanted_maze_factory()
{
    std::cout << "Enchanted_maze_factory::Enchanted_maze_factory()" << "\n";
}

Spell* Enchanted_maze_factory::cast_spell() const
{
    std::cout << "Enchanted_maze_factory::Cast_spell()" << "\n";

    return new Spell;
}
