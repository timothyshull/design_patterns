#ifndef BUTTON_H
#define BUTTON_H

#include "Widget.h"

class Button : public Widget {
public:
    Button(Dialog_director*);

    virtual void set_text(const char* text);

    virtual void handle_mouse(Mouse_event& event);
    // ...
};

#endif //BUTTON_H
