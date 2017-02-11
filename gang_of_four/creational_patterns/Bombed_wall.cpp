#include "Bombed_wall.h"

Bombed_wall::Bombed_wall() : Wall() {}

Bombed_wall::Bombed_wall(const Bombed_wall& other) : Wall(other)
{
    _bomb = other._bomb;
}

Wall* Bombed_wall::clone() const
{
    return new Bombed_wall(*this);
}
