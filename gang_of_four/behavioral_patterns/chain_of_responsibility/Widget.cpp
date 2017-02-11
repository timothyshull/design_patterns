#include "Widget.h"
#include "Help_handler.h"

Widget::Widget(Widget* w, Help_topic t) : Help_handler(w, t), _parent{w} {}
