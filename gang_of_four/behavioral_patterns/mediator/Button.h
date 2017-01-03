#ifndef DESIGN_PATTERNS_BUTTON_H
#define DESIGN_PATTERNS_BUTTON_H

#include"Widget.h"

class Button : public Widget {
public:
    Button(Dialog_director*);

    virtual void set_text(const char* text);

    virtual void handle_mouse(Mouse_event& event);
    // ...
};

#endif //DESIGN_PATTERNS_BUTTON_H
