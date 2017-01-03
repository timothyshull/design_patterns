#ifndefsDESIGN_PATTERNS_BOMBED_WALL_H
#definesDESIGN_PATTERNS_BOMBED_WALL_H

#include "Wall.h"

class BombedWall : public Wall {
public:
    BombedWall();
    BombedWall(const BombedWall&);

    virtual Wall* Clone() const;
    bool HasBomb();
private:
    bool _bomb;
};

#endif /* BOMBED_WALL_H */
