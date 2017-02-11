#include "Maze_game.h"
#include "Bombed_maze_factory.h"
#include "Enchanted_maze_factory.h"

int main()
{
    Maze_game game;
    Bombed_maze_factory bombed_factory;
    Enchanted_maze_factory enchanted_factory;
    game.create_maze(bombed_factory);
    game.create_maze(enchanted_factory);
    return 0;
}
