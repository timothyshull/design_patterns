#include <iostream>
#include <vector>

#include "Context.h"
#include "Token_stream.h"
#include "Interpreter.h"
#include "Number_expression.h"

std::vector<std::string> arguments(int argc, char* argv[])
{
    std::vector<std::string> res;
    for (int i{0}; i != argc; ++i) {
        res.emplace_back(argv[i]);
    }
    return res;
}

int main(int argc, char* argv[])
{
    std::vector<std::string> args = arguments(argc, argv);
    Context context;
    context.set_operator_precedence('<', 10);
    context.set_operator_precedence('+', 20);
    context.set_operator_precedence('-', 20);
    context.set_operator_precedence('*', 40);

    context.assign("pi", new Number_expression{3.1415926535897932385});
    context.assign("e", new Number_expression{ 2.7182818284590452354});

    Token_stream ts{std::cin}; // use input from cin

    Interpreter interpreter{ts, context};
    switch (argc) {
        case 1:
            break;
        case 2:
            ts.set_input(new std::istringstream{args.at(1)});
            break;
        default:
            interpreter.log_error("too many arguments");
            return 1;
    }

    interpreter.interpret();

    return interpreter.get_error_count();
}