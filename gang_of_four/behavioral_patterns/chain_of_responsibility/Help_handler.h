#ifndef DESIGN_PATTERNS_HELP_HANDLER_H
#define DESIGN_PATTERNS_HELP_HANDLER_H

using Topic = int;

const Topic NO_HELP_TOPIC = -1;

class Help_handler {
public:
    Help_handler(Help_handler* = nullptr, Topic = NO_HELP_TOPIC);

    virtual bool has_help();

    virtual void set_handler(Help_handler*, Topic);

    virtual void handle_help();

private:
    Help_handler* _successor;
    Topic _topic;
};

#endif//DESIGN_PATTERNS_HELP_HANDLER_H
