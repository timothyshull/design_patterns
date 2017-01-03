#ifndef DESIGN_PATTERNS_APPLICATION_H
#define DESIGN_PATTERNS_APPLICATION_H

#include"Help_handler.h"

class Application : public Help_handler {
public:
    Application(Topic t) : Help_handler(nullptr, t) {}

    virtual void handle_help();
    // ...
};

#endif//DESIGN_PATTERNS_APPLICATION_H
