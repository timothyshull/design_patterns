#ifndef CONTEXT_H
#define CONTEXT_H

class State;

class Context {
public:
    Context();

    Context(State* state);

    ~Context();

    void operation_interface();

    void operation_change_state();

private:
    friend class State;

    bool change_state(State* state);

    // member
    State* _state;
};

#endif //CONTEXT_H
