#ifndef ENTRY_FIELD_H
#define ENTRY_FIELD_H

#include "Widget.h"

class Entry_field : public Widget {
public:
    Entry_field(Dialog_director*);

    virtual void set_text(const char* text);

    virtual const char* get_text();

    virtual void handle_mouse(Mouse_event& event);
    // ...
};

#endif //ENTRY_FIELD_H
