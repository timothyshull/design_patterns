#ifndef FONT_DIALOG_DIRECTOR_H
#define FONT_DIALOG_DIRECTOR_H

#include "Dialog_director.h"
#include "Widget.h"
#include "List_box.h"
#include "Button.h"
#include "Entry_field.h"

class Font_dialog_director : public Dialog_director {
public:
    Font_dialog_director();

    virtual ~Font_dialog_director();

    virtual void widget_changed(Widget*);

protected:
    virtual void create_widgets();

private:
    Button* _ok;
    Button* _cancel;
    List_box* _font_list;
    Entry_field* _font_name;
};

#endif //FONT_DIALOG_DIRECTOR_H
