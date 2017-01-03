#ifndef DESIGN_PATTERNS_REQUEST_H
#define DESIGN_PATTERNS_REQUEST_H

enum class Request_type { help, print, preview };

class Request {
public:
    virtual Request_type get_kind() = 0;
};

#endif//DESIGN_PATTERNS_REQUEST_H
