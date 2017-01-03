#include <iostream>

#include "BombedMazeGame.h"
#include "Maze.h"
#include "MazeGame.h"

int main()
{
    MazeGame myGame;
    Maze* m1 = myGame.CreateMaze();
    std::cout << m1 << "\n";

    BombedMazeGame myBombedGame;
    Maze* m2 = myBombedGame.CreateMaze();
    std::cout << m2 << "\n";
}
