#ifndef HELP_HANDLER_H
#define HELP_HANDLER_H

enum class Help_topic {
    no_help_topic = -1,
    print_topic = 1,
    paper_orientation_topic = 2,
    application_topic = 3
};

class Help_handler {
public:
    Help_handler(Help_handler* = nullptr, Help_topic = Help_topic::no_help_topic);

    virtual bool has_help();

    virtual void set_handler(Help_handler*, Help_topic);

    virtual void handle_help();

private:
    Help_handler* _successor;
    Help_topic _topic;
};

#endif // HELP_HANDLER_H
