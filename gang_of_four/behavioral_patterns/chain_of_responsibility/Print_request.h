#ifndef PRINT_REQUEST_H
#define PRINT_REQUEST_H

#include "Request.h"

class Print_request : public Request {
public:
    Request_type get_kind() { return Request_type::print; };
};

#endif // PRINT_REQUEST_H
