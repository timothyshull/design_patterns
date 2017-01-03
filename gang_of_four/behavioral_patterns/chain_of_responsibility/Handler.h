#ifndef DESIGN_PATTERNS_HANDLER_H
#define DESIGN_PATTERNS_HANDLER_H

class Request;

class Help_request;

class Print_request;

class Handler {
public:
    virtual void handle_request(Request* the_request);

private:
    void handle_help(Help_request* the_request);

    void handle_print(Print_request* the_request);
};

#endif//DESIGN_PATTERNS_HANDLER_H
