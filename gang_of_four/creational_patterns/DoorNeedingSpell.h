#ifndefsDESIGN_PATTERNS_DOOR_NEEDING_SPELL_H
#definesDESIGN_PATTERNS_DOOR_NEEDING_SPELL_H

#include "Door.h"

class Room;

class DoorNeedingSpell : public Door {
public:
  DoorNeedingSpell(Room* r1, Room* r2);
};

#endif /* DOOR_NEEDING_SPELL_H */
