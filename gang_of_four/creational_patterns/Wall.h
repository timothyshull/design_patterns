#ifndefsDESIGN_PATTERNS_WALL_H
#definesDESIGN_PATTERNS_WALL_H

#include "MapSite.h"

class Wall : public MapSite {
public:
    Wall();
    Wall(const Wall&);
    virtual Wall* Clone() const;
    virtual void Enter();
};

#endif /* WALL_H */
