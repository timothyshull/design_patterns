#include "Maze_factory.h"

#include "Bombed_maze_factory.h"
#include "Enchanted_maze_factory.h"
#include "Maze.h"
#include "Wall.h"

#include <iostream>

Maze_factory* Maze_factory::_instance = nullptr;

Maze_factory::Maze_factory()
{
    std::cout << "Maze_factory::Maze_factory()" << "\n";
}

Maze_factory* Maze_factory::instance()
{

    if (_instance == 0) {

        const char* mazeStyle = getenv("MAZESTYLE");

        if (strcmp(mazeStyle, "bombed") == 0) {
            _instance = new Bombed_maze_factory;

        } else if (strcmp(mazeStyle, "enchanted") == 0) {
            _instance = new Enchanted_maze_factory;

            // ... other possible subclasses

        } else {        // default
            _instance = new Maze_factory;
        }
    }
    return _instance;
}

Maze* Maze_factory::make_maze() const
{
    return new Maze;
}

Wall* Maze_factory::make_wall() const
{
    return new Wall;
}

Room* Maze_factory::make_room(int n) const
{
    return new Room(n);
}

Door* Maze_factory::make_door(Room* r1, Room* r2) const
{
    return new Door(r1, r2);
}
