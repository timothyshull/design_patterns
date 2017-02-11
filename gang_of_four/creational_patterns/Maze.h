#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include "Room.h"

class Maze {

public:
    Maze();

    Room* room_number(int n) const;

    void add_room(Room* room);

    virtual Maze* clone() const;

private:
    std::vector<Room*>* _room_vector;

};

#endif // MAZE_H
