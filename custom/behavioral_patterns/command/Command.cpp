#include <iostream>
#include "Command.h"
#include "Reciever.h"

Command::Command() {}

Command::~Command() {}

void Command::execute() {}

Concrete_command::Concrete_command(Reciever* rev) : _rev{rev} {}

Concrete_command::~Concrete_command()
{
    delete this->_rev;
}

void Concrete_command::execute()
{
    _rev->action();
    std::cout << "Concrete_command execute() ...\n";
}
