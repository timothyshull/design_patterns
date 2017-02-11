#ifndef REQUEST_H
#define REQUEST_H

enum class Request_type { help, print, preview };

class Request {
public:
    virtual Request_type get_kind() = 0;
};

#endif // REQUEST_H
