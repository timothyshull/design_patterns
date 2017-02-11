#include <iostream>

#include "Bombed_maze_game.h"
#include "Maze.h"
#include "Maze_game.h"

int main()
{
    Maze_game myGame;
    Maze* m1 = myGame.create_maze();
    std::cout << m1 << "\n";

    Bombed_maze_game myBombedGame;
    Maze* m2 = myBombedGame.create_maze();
    std::cout << m2 << "\n";
}
