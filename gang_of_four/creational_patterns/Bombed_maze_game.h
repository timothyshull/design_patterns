#include "Bombed_wall.h"
#include "Maze_game.h"
#include "Room_with_a_bomb.h"

class Room;

class Wall;

class Bombed_maze_game : public Maze_game {
public:
    Bombed_maze_game();

    virtual Wall* make_wall() const { return new Bombed_wall; }

    virtual Room* make_room(int n) const { return new Room_with_a_bomb(n); }
};
