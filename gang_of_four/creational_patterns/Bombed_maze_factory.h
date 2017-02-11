#ifndef BOMBED_MAZE_FACTORY_H
#define BOMBED_MAZE_FACTORY_H

#include "Maze_factory.h"

class Wall;

class Room;

class Bombed_maze_factory : public Maze_factory {
public:
    Wall* make_wall() const;

    Room* make_room(int n) const;
};

#endif // BOMBED_MAZE_FACTORY_H
