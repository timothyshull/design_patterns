#ifndef LIST_BOX_H
#define LIST_BOX_H

#include "Dialog_director.h"
#include "List.h"
#include "Mouse_event.h"
#include "Widget.h"

class List_box : public Widget {
public:
    List_box(Dialog_director*);

    virtual const char* get_selection();

    virtual void get_list(List<char*> list_items);

    virtual void handle_mouse(Mouse_event& event);

    // ...
};

#endif //LIST_BOX_H
