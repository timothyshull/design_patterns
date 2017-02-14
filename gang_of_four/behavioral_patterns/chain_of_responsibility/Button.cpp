#include <iostream>

#include "Button.h"
#include "Widget.h"

Button::Button(Widget* h, Help_topic t) : Widget{h, t} {}

void Button::handle_help()
{
    if (has_help()) {
        std::cout << "Button::has_help() -> Button::handle_help()\n";
    } else {
        std::cout << "Button::has_help() returned false\n";
        Help_handler::handle_help();
    }
}
