#ifndef CONSTRAINT_SOLVER_H
#define CONSTRAINT_SOLVER_H

#include "Graphic.h"
#include "Constraint_solver_memento.h"

class Constraint_solver {
public:
    static Constraint_solver* instance();

    void solve();

    void add_constraint(Graphic* start_connection, Graphic* end_connection);

    void remove_constraint(Graphic* start_connection, Graphic* end_connection);

    Constraint_solver_memento* create_memento();

    void set_memento(Constraint_solver_memento*);

private:
    // nontrivial state and operations for enforcing
    // connectivity semantics
};

#endif //CONSTRAINT_SOLVER_H
