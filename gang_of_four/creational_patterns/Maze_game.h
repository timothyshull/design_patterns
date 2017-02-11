#ifndef MAZE_GAME_H
#define MAZE_GAME_H

#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"

class Maze_factory;

class MazeBuilder;

class Maze_game {
public:
    Maze* create_maze();

    Maze* create_maze(Maze_factory& factory);

    Maze* create_maze(MazeBuilder& builder);

    Maze* create_complex_maze(MazeBuilder& builder);

    // factory methods:

    inline virtual Maze* make_maze() const { return new Maze; }

    inline virtual Room* make_room(int n) const { return new Room(n); }

    inline virtual Wall* make_wall() const { return new Wall; }

    inline virtual Door* make_door(Room* r1, Room* r2) const { return new Door(r1, r2); }
};

#endif // MAZE_GAME_H
