#include "Maze_game.h"
#include "Spell.h"
#include "Enchanted_room.h"
#include "Door_needing_spell.h"

class Enchanted_maze_game : public Maze_game {
public:
    Enchanted_maze_game();

    virtual Room* make_room(int n) const { return new Enchanted_room(n, CastSpell()); }

    virtual Door* make_door(Room* r1, Room* r2) const { return new Door_needing_spell(r1, r2); }

protected:
    Spell* CastSpell() const;
};
