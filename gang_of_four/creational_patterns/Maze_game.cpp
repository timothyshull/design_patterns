#include "Maze.h"
#include "MazeBuilder.h"
#include "Maze_factory.h"
#include "Maze_game.h"

#include <iostream>

Maze* Maze_game::create_maze()
{

    std::cout << "Maze_game::create_maze()" << "\n";

    Maze* aMaze = make_maze();

    Room* r1 = make_room(1);
    Room* r2 = make_room(2);
    Door* theDoor = make_door(r1, r2);

    aMaze->add_room(r1);
    aMaze->add_room(r2);

    r1->set_side(North, make_wall());
    r1->set_side(East, theDoor);
    r1->set_side(South, make_wall());
    r1->set_side(West, make_wall());

    r2->set_side(North, make_wall());
    r2->set_side(East, make_wall());
    r2->set_side(South, make_wall());
    r2->set_side(West, theDoor);

    return aMaze;
}

Maze* Maze_game::create_maze(Maze_factory& factory)
{

    std::cout << "Maze_game::create_maze(Maze_factory&)" << "\n";

    Maze* aMaze = factory.make_maze();
    Room* r1 = factory.make_room(1);
    Room* r2 = factory.make_room(2);
    Door* aDoor = factory.make_door(r1, r2);

    aMaze->add_room(r1);
    aMaze->add_room(r2);

    r1->set_side(North, factory.make_wall());
    r1->set_side(East, aDoor);
    r1->set_side(South, factory.make_wall());
    r1->set_side(West, factory.make_wall());

    r2->set_side(North, factory.make_wall());
    r2->set_side(East, factory.make_wall());
    r2->set_side(South, factory.make_wall());
    r2->set_side(West, aDoor);

    return aMaze;
}

Maze* Maze_game::create_maze(MazeBuilder& builder)
{

    std::cout << "Maze_game::create_maze(MazeBuilder&)" << "\n";

    builder.BuildMaze();

    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildDoor(1, 2);

    return builder.GetMaze();
}

Maze* Maze_game::create_complex_maze(MazeBuilder& builder)
{

    std::cout << "Maze_game::create_complex_maze(MazeBuilder&)" << "\n";

    builder.BuildRoom(1);
    // ...
    builder.BuildRoom(1001);

    return builder.GetMaze();
}
