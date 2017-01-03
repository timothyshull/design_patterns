#ifndef DESIGN_PATTERNS_HELP_REQUEST_H
#define DESIGN_PATTERNS_HELP_REQUEST_H

#include"Request.h"

class Help_request : public Request {
public:
    Request_type get_kind() { return Request_type::help; };
};

#endif//DESIGN_PATTERNS_HELP_REQUEST_H
