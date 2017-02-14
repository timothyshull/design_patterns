#ifndef DESIGN_PATTERNS_CONCRETE_COMMAND_H
#define DESIGN_PATTERNS_CONCRETE_COMMAND_H

#include "Command.h"

template<typename Action_type>
class Concrete_command : public Command {
public:
    Concrete_command(Action_type action) : _action{action} {}

    inline virtual void execute() { _action(); };

private:
    Action_type _action;
};

#endif // DESIGN_PATTERNS_CONCRETE_COMMAND_H
