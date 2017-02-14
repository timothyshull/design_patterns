#include "Invoker.h"
#include "Command.h"

Invoker::Invoker(Command& cmd) : _cmd{&cmd} {}

void Invoker::invoke()
{
    _cmd->execute();
}
