#ifndef DESIGN_PATTERNS_WIDGET_H
#define DESIGN_PATTERNS_WIDGET_H

#include"Dialog_director.h"

class Mouse_event;

class Widget {
public:
    Widget(Dialog_director*);

    virtual void changed();

    virtual void handle_mouse(Mouse_event& event);

private:
    Dialog_director* _director;
};

#endif //DESIGN_PATTERNS_WIDGET_H
