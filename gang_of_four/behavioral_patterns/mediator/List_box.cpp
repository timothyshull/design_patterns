#include "List_box.h"

List_box::List_box(Dialog_director* dialog_director) : Widget(dialog_director)
{
}

const char* List_box::get_selection()
{
    return nullptr;
}

void List_box::get_list(List<char*> list_items)
{

}

void List_box::handle_mouse(Mouse_event& event)
{
    Widget::handle_mouse(event);
}
