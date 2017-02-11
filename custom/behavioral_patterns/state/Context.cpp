#include "Context.h"
#include "State.h"

Context::Context() {}

Context::Context(State* state)
{
    this->_state = state;
}

Context::~Context()
{
    delete _state;
}

void Context::operation_interface()
{
    _state->operation_interface(this);
}

bool Context::change_state(State* state)
{
    this->_state = state;
    return true;
}

void Context::operation_change_state()
{
    _state->operation_change_state(this);

}
