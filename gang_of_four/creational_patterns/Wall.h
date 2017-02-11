#ifndef WALL_H
#define WALL_H

#include "Map_site.h"

class Wall : public Map_site {
public:
    Wall();

    Wall(const Wall&);

    virtual Wall* clone() const;

    virtual void enter();
};

#endif // WALL_H
