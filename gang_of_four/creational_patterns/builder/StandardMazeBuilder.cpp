#include "Door.h"
#include "Maze.h"
#include "Maze_parts.h"
#include "StandardMazeBuilder.h"
#include "Wall.h"

class Room;

StandardMazeBuilder::StandardMazeBuilder()
{
    _currentMaze = 0;
}

void StandardMazeBuilder::BuildMaze()
{
    _currentMaze = new Maze;
}

Maze* StandardMazeBuilder::GetMaze()
{
    return _currentMaze;
}

void StandardMazeBuilder::BuildRoom(int n)
{
    if (!_currentMaze->room_number(n)) {
        Room* room = new Room(n);
        _currentMaze->add_room(room);

        room->set_side(North, new Wall);
        room->set_side(South, new Wall);
        room->set_side(East, new Wall);
        room->set_side(West, new Wall);
    }
}

void StandardMazeBuilder::BuildDoor(int n1, int n2)
{
    Room* r1 = _currentMaze->room_number(n1);
    Room* r2 = _currentMaze->room_number(n2);
    Door* d = new Door(r1, r2);

    r1->set_side(CommonWall(r1, r2), d);
    r2->set_side(CommonWall(r2, r1), d);
}

/**
 * Utility operation that determines the direction of the common wall
 * between two rooms.
 */
Direction StandardMazeBuilder::CommonWall(Room* r1, Room* r2)
{

    // Solution based on https://code.google.com/p/basic-algorithm-operations/source/browse/trunk/DP/Builder.cpp
    // TODO: check if this is a correct implementation.
    if (r1->get_room_number() < r2->get_room_number()) {
        return East;
    } else {
        return West;
    }

}
