#ifndef DESIGN_PATTERNS_WIDGET_H
#define DESIGN_PATTERNS_WIDGET_H

#include"Help_handler.h"

class Widget : public Help_handler {
protected:
    Widget(Widget* parent, Topic t = NO_HELP_TOPIC);

private:
    Widget* _parent;
};

#endif//DESIGN_PATTERNS_WIDGET_H
