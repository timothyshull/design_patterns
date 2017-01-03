#ifndef DESIGN_PATTERNS_CONSTRAINT_SOLVER_MEMENTO_H
#define DESIGN_PATTERNS_CONSTRAINT_SOLVER_MEMENTO_H

class Constraint_solver_memento {
public:
    virtual ~Constraint_solver_memento();

private:
    friend class Constraint_solver;

    Constraint_solver_memento();

    // private constraint solver state
};

#endif //DESIGN_PATTERNS_CONSTRAINT_SOLVER_MEMENTO_H
