#ifndef APPLICATION_H
#define APPLICATION_H

#include "Help_handler.h"

class Application : public Help_handler {
public:
    Application(Help_topic t) : Help_handler(nullptr, t) {}

    virtual void handle_help();
    // ...
};

#endif // APPLICATION_H
