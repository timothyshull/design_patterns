#include <iostream>
#include "Context.h"
#include "Interpret.h"

int main(int argc, char* argv[])
{
    Context ctx;
    Abstract_expression* terminal_expression = new Terminal_expression("test");
    Abstract_expression* nonterminal_expression = new Nonterminal_expression(terminal_expression, 2);
    nonterminal_expression->interpret(ctx);
    return 0;
}
