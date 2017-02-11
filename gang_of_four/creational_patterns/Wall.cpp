#include "Wall.h"

Wall::Wall() {}

Wall::Wall(Wall const&) {}

Wall* Wall::clone() const
{
    return new Wall(*this);
}

void Wall::enter() {}
