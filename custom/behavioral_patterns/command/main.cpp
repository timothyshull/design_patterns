#include <iostream>
#include "Command.h"
#include "Concrete_command.h"
#include "Invoker.h"

int main()
{
    auto custom_lambda = [](){ std::cout << "calling custom_lambda"; };

    Concrete_command<decltype(custom_lambda)> cmd{custom_lambda};
    Invoker invoker{cmd};
    invoker.invoke();
    return 0;
}
