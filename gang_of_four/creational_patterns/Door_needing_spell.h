#ifndef DOOR_NEEDING_SPELL_H
#define DOOR_NEEDING_SPELL_H

#include "Door.h"

class Room;

class Door_needing_spell : public Door {
public:
    Door_needing_spell(Room* r1, Room* r2);
};

#endif // DOOR_NEEDING_SPELL_H
