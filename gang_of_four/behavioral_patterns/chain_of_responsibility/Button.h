#ifndef BUTTON_H
#define BUTTON_H

#include "Widget.h"

class Button : public Widget {
public:
    Button(Widget* d, Help_topic t = Help_topic::no_help_topic);

    virtual void handle_help();
    // overrides...
};

#endif // BUTTON_H
