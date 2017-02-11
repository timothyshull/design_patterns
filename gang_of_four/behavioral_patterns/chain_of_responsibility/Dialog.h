#ifndef DIALOG_H
#define DIALOG_H

#include "Help_handler.h"
#include "Widget.h"

class Dialog : public Widget {
public:
    Dialog(Help_handler* h, Help_topic t = Help_topic::no_help_topic);

    virtual void handle_help();

    // Widget operations that Dialog overrides...
    // ...
};

#endif // DIALOG_H
