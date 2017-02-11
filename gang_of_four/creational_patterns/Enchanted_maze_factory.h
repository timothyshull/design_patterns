#ifndef ENCHANTED_MAZE_FACTORY_H
#define ENCHANTED_MAZE_FACTORY_H

#include "Door_needing_spell.h"
#include "Enchanted_room.h"
#include "Maze_factory.h"
#include "Spell.h"

class Door;

class Room;

class Maze_factory;

class Enchanted_maze_factory : public Maze_factory {
public:
    Enchanted_maze_factory();

    inline virtual Room* make_room(int n) const { return new Enchanted_room(n, cast_spell()); }

    inline virtual Door* make_door(Room* r1, Room* r2) const { return new Door_needing_spell(r1, r2); }

protected:
    Spell* cast_spell() const;
};

#endif // ENCHANTED_MAZE_FACTORY_H
