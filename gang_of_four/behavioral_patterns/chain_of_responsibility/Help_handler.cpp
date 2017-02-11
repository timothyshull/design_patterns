#include "Help_handler.h"

Help_handler::Help_handler(Help_handler* h, Help_topic t) : _successor(h), _topic(t) {}

bool Help_handler::has_help()
{
    return _topic != Help_topic::no_help_topic;
}

void Help_handler::set_handler(Help_handler* help_handler, Help_topic topic)
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
