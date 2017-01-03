#ifndef DESIGN_PATTERNS_DIALOG_H
#define DESIGN_PATTERNS_DIALOG_H

#include"Help_handler.h"
#include"Widget.h"

class Dialog : public Widget {
public:
    Dialog(Help_handler* h, Topic t = NO_HELP_TOPIC);

    virtual void handle_help();

    // Widget operations that Dialog overrides...
    // ...
};

#endif//DESIGN_PATTERNS_DIALOG_H
