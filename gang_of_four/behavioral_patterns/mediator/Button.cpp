#include"Button.h"

Button::Button(Dialog_director* dialog_director) : Widget(dialog_director)
{

}

void Button::set_text(const char* text)
{

}

void Button::handle_mouse(Mouse_event& event)
{
    // ...
    changed();
    Widget::handle_mouse(event);
}
