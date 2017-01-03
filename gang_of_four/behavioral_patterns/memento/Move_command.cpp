#include"Move_command.h"
#include"Constraint_solver.h"

Move_command::Move_command(Graphic* target, const Point& delta)
{

}

void Move_command::execute()
{
    Constraint_solver* solver{Constraint_solver::instance()};
    _state = solver->create_memento();
    _target->move(_delta);
    solver->solve();
}

void Move_command::unexecute()
{
    Constraint_solver* solver{Constraint_solver::instance()};
    _target->move(-_delta);
    solver->set_memento(_state);
    solver->solve();
}
