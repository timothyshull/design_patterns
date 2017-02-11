#ifndef WIDGET_H
#define WIDGET_H

#include "Help_handler.h"

class Widget : public Help_handler {
protected:
    Widget(Widget* parent, Help_topic t = Help_topic::no_help_topic);

private:
    Widget* _parent;
};

#endif // WIDGET_H
