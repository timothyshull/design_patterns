#ifndef EXTENDED_HANDLER_H
#define EXTENDED_HANDLER_H

#include "Handler.h"

class Request;

class Extended_handler : public Handler {
public:
    virtual void handle_request(Request* the_request);
    // ...
};

#endif // EXTENDED_HANDLER_H
