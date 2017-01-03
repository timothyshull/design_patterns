#include<iostream>
#include"Font_dialog_director.h"

Font_dialog_director::Font_dialog_director() : _ok{nullptr}, _cancel{nullptr}, _font_list{nullptr}, _font_name{nullptr}
{
    std::cout << "Font_dialog_director::Font_dialog_director()\n";
}

Font_dialog_director::~Font_dialog_director()
{

}

void Font_dialog_director::widget_changed(Widget* changed_widget)
{
    if (changed_widget == _font_list) {
        _font_name->set_text(_font_list->get_selection());
    } else if (changed_widget == _ok) {
        // apply font change and dismiss dialog
    } else if (changed_widget == _cancel) {
        // dismiss dialog
    }
}

void Font_dialog_director::create_widgets()
{
    _ok = new Button(this);
    _cancel = new Button(this);
    _font_list = new List_box(this);
    _font_name = new Entry_field(this);

    // fill list box with available font names

    // assemble the widgets in the dialog
}
