#ifndefsDESIGN_PATTERNS_ROOM_WITH_A_BOMB_H
#definesDESIGN_PATTERNS_ROOM_WITH_A_BOMB_H

#include "Room.h"

class RoomWithABomb : public Room {
public:
    RoomWithABomb(int = 0, bool bombed = false);
    RoomWithABomb(const RoomWithABomb&);
    bool HasBomb();
private:
    bool _bomb;
};

#endif /* ROOM_WITH_A_BOMB_H */
