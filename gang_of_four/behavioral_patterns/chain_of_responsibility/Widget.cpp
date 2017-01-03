#include"Widget.h"
#include"Help_handler.h"

Widget::Widget(Widget* w, Topic t) : Help_handler(w, t), _parent{w} {}
