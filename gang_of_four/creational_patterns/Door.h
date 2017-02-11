#ifndef DOOR_H
#define DOOR_H

#include "Map_site.h"
#include "Room.h"

class Door : public Map_site {
public:
    Door();

    Door(Room* r1, Room* r2);

    Door(const Door&);

    virtual void initialize(Room* r1, Room* r2);

    virtual Door* clone() const;

    virtual void enter();

    Room* other_side_from(Room*);

private:
    Room* _room1;
    Room* _room2;
};

#endif // DOOR_H
