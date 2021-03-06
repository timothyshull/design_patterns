#ifndef MACRO_COMMAND_H
#define MACRO_COMMAND_H

#include "Command.h"
#include "List.h"

class Macro_command : public Command {
public:
    Macro_command();

    virtual ~Macro_command();

    virtual void add(Command*);

    virtual void remove(Command*);

    virtual void execute();

private:
    List<Command*>* _cmds;
};

#endif // MACRO_COMMAND_H
