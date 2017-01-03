#include"Command.h"
#include"Simple_command.h"
#include"My_class.h"

int main()
{
    My_class* receiver{new My_class};
    Command* command{new Simple_command<My_class>(receiver, &My_class::action)};
    command->execute();
    return 0;
}
