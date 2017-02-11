#ifndef ENCHANTED_ROOM_H
#define ENCHANTED_ROOM_H

#include "Room.h"

class Spell;

class Enchanted_room : public Room {
public:
    Enchanted_room(int n, Spell* spell);

private:
    Spell* _spell;
};

#endif // ENCHANTED_ROOM_H
