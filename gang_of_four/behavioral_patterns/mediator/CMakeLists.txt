include_directories(./ ../../foundation_classes)

set(MEDIATOR_SRCS
        mediator_main.cpp
        Button.cpp
        Button.h
        Dialog_director.cpp
        Dialog_director.h
        Entry_field.cpp
        Entry_field.h
        Font_dialog_director.cpp
        Font_dialog_director.h
        List_box.cpp
        List_box.h
        Mouse_event.cpp
        Mouse_event.h
        Widget.cpp
        Widget.h)

add_executable(mediator ${MEDIATOR_SRCS})