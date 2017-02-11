#ifndef ROOM_WITH_A_BOMB_H
#define ROOM_WITH_A_BOMB_H

#include "Room.h"

class Room_with_a_bomb : public Room {
public:
    Room_with_a_bomb(int = 0, bool bombed = false);

    Room_with_a_bomb(const Room_with_a_bomb&);

    bool has_bomb();

private:
    bool _bomb;
};

#endif // ROOM_WITH_A_BOMB_H
