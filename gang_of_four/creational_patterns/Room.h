#ifndef ROOM_H
#define ROOM_H

#include <array>
#include "Map_site.h"
#include "Maze_parts.h"

class Room : Map_site {
public:
    Room(int n = 0);

    virtual Room* clone() const;

    void set_side(Direction direction, Map_site* ms);

    int get_room_number();

    virtual void enter();

private:
    std::array<Map_site*, 4> _sides;
    // Map_site* _sides[4];
    int _room_number;
};

#endif // ROOM_H
