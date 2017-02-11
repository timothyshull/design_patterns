#include <iostream>
#include "Room.h"

class Wall;

class Door;

Room::Room(int n) : _room_number(n) {}

void Room::set_side(Direction direction, Map_site* ms)
{
    _sides[static_cast<int>(direction)] = ms;
}

int Room::get_room_number()
{
    return _room_number;
}

Room* Room::clone() const
{
    return new Room(*this);
}

void Room::enter() {}
