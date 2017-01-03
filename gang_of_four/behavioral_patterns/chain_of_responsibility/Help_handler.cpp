#include"Help_handler.h"

Help_handler::Help_handler(Help_handler* h, Topic t) : _successor(h), _topic(t) {}

bool Help_handler::has_help()
{
    return _topic != NO_HELP_TOPIC;
}

void Help_handler::set_handler(Help_handler* help_handler, Topic topic)
{
    _successor = help_handler;
    _topic = topic;
}

void Help_handler::handle_help()
{
    if (_successor != nullptr) {
        _successor->handle_help();
    }
}
