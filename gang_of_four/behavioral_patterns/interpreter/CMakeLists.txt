set(INTERPRETER_SRCS
        interpreter_main.cpp
        And_exp.cpp
        And_exp.h
        Boolean_exp.cpp
        Boolean_exp.h
        Constant.cpp
        Constant.h
        Context.cpp
        Context.h
        Not_exp.cpp
        Not_exp.h
        Or_exp.cpp
        Or_exp.h
        Variable_exp.cpp
        Variable_exp.h
        )

add_executable(interpreter ${INTERPRETER_SRCS})