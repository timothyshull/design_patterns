#include<iostream>
#include"Dialog.h"
#include"Help_handler.h"

Dialog::Dialog(Help_handler* h, Topic t) : Widget(nullptr)
{
    set_handler(h, t);
}

void Dialog::handle_help()
{
    if (has_help()) {
        // offer help on the dialog
        std::cout << "Dialog::has_help() -> Dialog::handle_help()\n";
    } else {
        std::cout << "Dialog::has_help() returned false\n";
        Help_handler::handle_help();
    }
}
