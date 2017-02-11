include_directories(./ ../iterator ../../foundation_classes)

set(CMD_SRCS
        command_main.cpp
        Application.cpp
        Application.h
        Command.cpp
        Command.h
        Document.cpp
        Document.h
        Macro_command.cpp
        Macro_command.h
        My_class.cpp
        My_class.h
        Open_command.cpp
        Open_command.h
        Paste_command.cpp
        Paste_command.h
        Simple_command.h

        ../iterator/Iterator.h
        ../iterator/ListIterator.h
        #        ../iterator/ListIterator.cpp
        ../../foundation_classes/List.h
        #        ../../foundation_classes/List.cpp
        )

add_executable(command ${CMD_SRCS})
