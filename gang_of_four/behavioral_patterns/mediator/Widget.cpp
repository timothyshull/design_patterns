#include<iostream>
#include"Widget.h"

Widget::Widget(Dialog_director* dialog_director) : _director{dialog_director}
{
    std::cout << "Widget::Widget(Dialog_director*)\n";
}

void Widget::changed()
{
    std::cout << "void Widget::changed()\n";
    _director->widget_changed(this);
}

void Widget::handle_mouse(Mouse_event& event) {}
