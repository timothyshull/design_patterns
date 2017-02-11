#include <iostream>

#include "Maze_game.h"
#include "CountingMazeBuilder.h"

using namespace std;

int main()
{
    int rooms, doors;
    Maze_game game;
    CountingMazeBuilder builder;

    game.create_maze(builder);
    builder.GetCounts(rooms, doors);

    cout << "The maze has "
         << rooms << " rooms and "
         << doors << " doors" << endl;
}
