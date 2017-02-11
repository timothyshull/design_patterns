#include <iostream>
#include "Command.h"
#include "Invoker.h"
#include "Reciever.h"

int main(int argc, char* argv[])
{
    Reciever* reciever = new Reciever();
    Command* cmd = new Concrete_command(reciever);
    Invoker* invoker = new Invoker(cmd);
    invoker->invoke();
    return 0;
}
