#ifndef BOMBED_WALL_H
#define BOMBED_WALL_H

#include "Wall.h"

class Bombed_wall : public Wall {
public:
    Bombed_wall();

    Bombed_wall(const Bombed_wall&);

    virtual Wall* clone() const;

    bool has_bomb();

private:
    bool _bomb;
};

#endif // BOMBED_WALL_H
