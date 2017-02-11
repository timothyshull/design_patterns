#include "Door.h"
#include "Maze.h"
#include "Maze_prototype_factory.h"

Maze_prototype_factory::Maze_prototype_factory(Maze* m, Wall* w, Room* r, Door* d)
        : _prototype_maze{m},
          _prototype_wall{w},
          _prototype_room{r},
          _prototype_door{d} {}

Door* Maze_prototype_factory::make_door(Room* r1, Room* r2) const
{
    Door* door = _prototype_door->clone();
    door->initialize(r1, r2);
    return door;
}
