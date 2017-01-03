#ifndefsDESIGN_PATTERNS_BOMBED_MAZEFACTORY_H
#definesDESIGN_PATTERNS_BOMBED_MAZEFACTORY_H

#include "MazeFactory.h"

class Wall;
class Room;

class BombedMazeFactory : public MazeFactory {
public:
    Wall* MakeWall() const;
    Room* MakeRoom(int n) const;
};

#endif /* BOMBED_MAZEFACTORY_H */
