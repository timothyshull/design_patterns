#ifndef MAZE_PROTOTYPE_FACTORY_H
#define MAZE_PROTOTYPE_FACTORY_H

#include "Maze_factory.h"
#include "Door.h"
#include "Maze.h"
#include "Room.h"
#include "Wall.h"

class Maze_prototype_factory : public Maze_factory {
public:
    Maze_prototype_factory(Maze*, Wall*, Room*, Door*);

    inline virtual Maze* make_maze() const { return _prototype_maze->clone(); }

    inline virtual Room* make_room(int) const { return _prototype_room->clone(); }

    inline virtual Wall* make_wall() const { return _prototype_wall->clone(); }

    virtual Door* make_door(Room*, Room*) const;

private:
    Maze* _prototype_maze;
    Room* _prototype_room;
    Wall* _prototype_wall;
    Door* _prototype_door;
};

#endif // MAZE_PROTOTYPE_FACTORY_H
