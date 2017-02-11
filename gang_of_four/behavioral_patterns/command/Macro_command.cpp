#include "Macro_command.h"
#include "Command.h"
#include "ListIterator.h"

void Macro_command::execute()
{
    ListIterator<Command*> i(_cmds);

    for (i.First(); !i.IsDone(); i.Next()) {
        Command* c = i.CurrentItem();
        c->execute();
    }
}

void Macro_command::add(Command* c)
{
    _cmds->Append(c);
}

void Macro_command::remove(Command* c)
{
    _cmds->Remove(c);
}
