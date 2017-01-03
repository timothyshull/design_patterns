#include<iostream>
#include"Handler.h"
#include"Request.h"
#include"Help_request.h"
#include"Print_request.h"

void Handler::handle_request(Request* the_request)
{
    switch (the_request->get_kind()) {
        case Request_type::help:
            // cast argument to appropriate type
            handle_help((Help_request*) the_request);
            break;

        case Request_type::print:
            handle_print((Print_request*) the_request);
            // ...
            break;

        default:
            // ...
            break;
    }
}

void Handler::handle_help(Help_request* the_request)
{
    std::cout << "Handler::handle_help(Help_request* the_request)\n";
}

void Handler::handle_print(Print_request* the_request)
{
    std::cout << "void Handler::handle_print(Print_request* the_request)\n";
}
