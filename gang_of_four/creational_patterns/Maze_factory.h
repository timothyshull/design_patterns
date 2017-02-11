#ifndef MAZE_FACTORY_H
#define MAZE_FACTORY_H

class Maze;

class Wall;

class Room;

class Door;

class Maze_factory {
public:

    static Maze_factory* instance();

    virtual Maze* make_maze() const;

    virtual Wall* make_wall() const;

    virtual Room* make_room(int n) const;

    virtual Door* make_door(Room* r1, Room* r2) const;

#ifdef ABSTRACT_FACTORY
    public:
#else
protected:
#endif

    Maze_factory();  // constructor is public for Abstract Factory, protected for singleton

private:
    static Maze_factory* _instance;
};

#endif // MAZE_FACTORY_H
