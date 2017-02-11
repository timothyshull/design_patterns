#include "Maze.h"

Maze::Maze() : _room_vector(new std::vector<Room*>) {}

Room* Maze::room_number(int n) const
{
    std::vector<Room*>::const_iterator it = _room_vector->begin();
    for (; it != _room_vector->end(); ++it) {
        if ((*it)->get_room_number() == n) {
            return (*it);
            break;
        }
    }
    return 0;
}

void Maze::add_room(Room* room)
{
    _room_vector->push_back(room);
}

Maze* Maze::clone() const
{
    return new Maze(*this);
}
