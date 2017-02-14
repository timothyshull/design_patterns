#include "Command.h"
#include "Simple_command.h"
#include "My_class.h"

int main()
{
    My_class receiver;
    Simple_command<My_class> simple_command{&receiver, &My_class::action};
    Command& command = simple_command;
    command.execute();
    return 0;
}
