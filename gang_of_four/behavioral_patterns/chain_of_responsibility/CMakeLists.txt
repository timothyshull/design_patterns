set(COR_SRCS
        chain_of_responsibility_main.cpp
        Application.cpp
        Application.h
        Button.cpp
        Button.h
        Dialog.cpp
        Dialog.h
        Extended_handler.cpp
        Extended_handler.h
        Handler.cpp
        Handler.h
        Help_handler.cpp
        Help_handler.h
        Help_request.h
        Print_request.h
        Request.h
        Widget.cpp
        Widget.h
        )

add_executable(chain_of_responsibility ${COR_SRCS})
