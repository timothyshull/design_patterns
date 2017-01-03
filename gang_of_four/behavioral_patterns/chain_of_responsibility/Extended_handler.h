#ifndef DESIGN_PATTERNS_EXTENDED_HANDLER_H
#define DESIGN_PATTERNS_EXTENDED_HANDLER_H

#include"Handler.h"

class Request;

class Extended_handler : public Handler {
public:
    virtual void handle_request(Request* the_request);
    // ...
};

#endif//DESIGN_PATTERNS_EXTENDED_HANDLER_H
