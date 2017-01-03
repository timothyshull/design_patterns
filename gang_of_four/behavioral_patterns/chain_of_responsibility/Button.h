#ifndef DESIGN_PATTERNS_BUTTON_H
#define DESIGN_PATTERNS_BUTTON_H

#include"Widget.h"

class Button : public Widget {
public:
    Button(Widget* d, Topic t = NO_HELP_TOPIC);

    virtual void handle_help();
    // overrides...
};

#endif//DESIGN_PATTERNS_BUTTON_H
