#include <iostream>
#include "Maze_game.h"
#include "StandardMazeBuilder.h"

using namespace std;

class Maze;

int main()
{
    Maze* maze;
    Maze_game game;
    StandardMazeBuilder builder;
    game.create_maze(builder);
    maze = builder.GetMaze();
    cout << maze << "\n";
    return 0;
}
