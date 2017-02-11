#ifndef DIALOG_DIRECTOR_H
#define DIALOG_DIRECTOR_H

class Dialog_director {
public:
    ~Dialog_director();

    virtual void show_dialog();

    virtual void widget_changed(Widget*) = 0;

protected:
    Dialog_director();

    virtual void create_widgets() = 0;
};

#endif //DIALOG_DIRECTOR_H
