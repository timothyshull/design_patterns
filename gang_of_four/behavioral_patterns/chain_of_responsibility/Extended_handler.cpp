#include<iostream>
#include"Extended_handler.h"
#include"Handler.h"
#include"Request.h"

void Extended_handler::handle_request(Request* the_request)
{
    switch (the_request->get_kind()) {
        case Request_type::preview:
            // handle preview
            std::cout << "Extended_handler::handle_request(Request* the_request) received Request_type::preview\n";
            break;
        default:
            // defer to base Handler
            Handler::handle_request(the_request);
    }
}
