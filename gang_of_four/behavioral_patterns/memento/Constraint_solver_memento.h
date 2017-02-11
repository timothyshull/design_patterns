#ifndef CONSTRAINT_SOLVER_MEMENTO_H
#define CONSTRAINT_SOLVER_MEMENTO_H

class Constraint_solver_memento {
public:
    virtual ~Constraint_solver_memento();

private:
    friend class Constraint_solver;

    Constraint_solver_memento();

    // private constraint solver state
};

#endif //CONSTRAINT_SOLVER_MEMENTO_H
