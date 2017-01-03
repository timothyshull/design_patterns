#include"Entry_field.h"

Entry_field::Entry_field(Dialog_director* dialog_director) : Widget(dialog_director)
{

}

void Entry_field::set_text(const char* text)
{

}

const char* Entry_field::get_text()
{
    return nullptr;
}

void Entry_field::handle_mouse(Mouse_event& event)
{
    Widget::handle_mouse(event);
}
