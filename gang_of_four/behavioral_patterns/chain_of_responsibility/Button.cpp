#include<iostream>
#include"Button.h"
#include"Help_handler.h"

class Widget;

Button::Button(Widget* h, Topic t) : Widget(h, t) {}

void Button::handle_help()
{
    if (has_help()) {
        std::cout << "Button::has_help() -> Button::handle_help()\n";
    } else {
        std::cout << "Button::has_help() returned false\n";
        Help_handler::handle_help();
    }
}
