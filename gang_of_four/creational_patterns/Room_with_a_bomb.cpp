#include "Room_with_a_bomb.h"

Room_with_a_bomb::Room_with_a_bomb(int n, bool bombed)
        : Room(n), _bomb(bombed) {}

Room_with_a_bomb::Room_with_a_bomb(const Room_with_a_bomb& other)
        : Room(other)
{
    _bomb = other._bomb;
}

bool Room_with_a_bomb::has_bomb()
{
    return _bomb;
}
