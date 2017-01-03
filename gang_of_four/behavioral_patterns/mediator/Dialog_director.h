#ifndef DESIGN_PATTERNS_DIALOG_DIRECTOR_H
#define DESIGN_PATTERNS_DIALOG_DIRECTOR_H

class Dialog_director {
public:
    ~Dialog_director();

    virtual void show_dialog();

    virtual void widget_changed(Widget*) = 0;

protected:
    Dialog_director();

    virtual void create_widgets() = 0;
};

#endif //DESIGN_PATTERNS_DIALOG_DIRECTOR_H
