#ifndef DESIGN_PATTERNS_STATE_H
#define DESIGN_PATTERNS_STATE_H

class Context;

class State {
public:
    State();

    virtual ~State();

    virtual void operation_interface(Context*) = 0;

    virtual void operation_change_state(Context*) = 0;

protected:
    bool change_state(Context* con, State* st);
};

class Concrete_state_a : public State {
public:
    Concrete_state_a();

    virtual ~Concrete_state_a();

    virtual void operation_interface(Context*);

    virtual void operation_change_state(Context*);
};

class Concrete_state_b : public State {
public:
    Concrete_state_b();

    virtual ~Concrete_state_b();

    virtual void operation_interface(Context*);

    virtual void operation_change_state(Context*);
};

#endif //DESIGN_PATTERNS_STATE_H
