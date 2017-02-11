#ifndef HELP_REQUEST_H
#define HELP_REQUEST_H

#include "Request.h"

class Help_request : public Request {
public:
    Request_type get_kind() { return Request_type::help; };
};

#endif // HELP_REQUEST_H
