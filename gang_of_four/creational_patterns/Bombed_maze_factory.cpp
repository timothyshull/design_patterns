#include "Bombed_maze_factory.h"
#include "Bombed_wall.h"
#include "Room.h"
#include "Room_with_a_bomb.h"

Wall* Bombed_maze_factory::make_wall() const
{
    return new Bombed_wall;
}

Room* Bombed_maze_factory::make_room(int n) const
{
    return new Room_with_a_bomb(n);
}

