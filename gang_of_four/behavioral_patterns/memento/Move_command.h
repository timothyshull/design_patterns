#ifndef MOVE_COMMAND_H
#define MOVE_COMMAND_H

#include "Point.h"
#include "Graphic.h"
#include "Constraint_solver_memento.h"

class Move_command {
public:
    Move_command(Graphic* target, const Point& delta);

    void execute();

    void unexecute();

private:
    Constraint_solver_memento* _state;
    Point _delta;
    Graphic* _target;
};

#endif //MOVE_COMMAND_H
