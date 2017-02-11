#include <iostream>
#include "Bombed_wall.h"
#include "Door.h"
#include "Maze.h"
#include "Maze_game.h"
#include "Maze_prototype_factory.h"
#include "Room_with_a_bomb.h"

int main()
{
    Maze_game game;
    Maze_prototype_factory simple_maze_factory{new Maze, new Wall, new Room, new Door};
    Maze* maze = game.create_maze(simple_maze_factory);
    std::cout << maze << "\n";
    Maze_prototype_factory bombed_maze_factory{new Maze, new Bombed_wall, new Room_with_a_bomb, new Door};
    return 0;
}
