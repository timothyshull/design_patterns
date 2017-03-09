set(CMAKE_CXX_STANDARD 14) # for make_unique

set(INTERPRETER_LIB_DEPS
        Binary_expression.h
        Call_expression.h
        Context.h
        Expression.cpp
        Expression.h
        Function_definition.h
        Function_prototype.h
        Interpreter.cpp
        Interpreter.h
        Number_expression.h
        token.h
        Token_stream.cpp
        Token_stream.h
        utility.cpp
        utility.h
        Variable_expression.h)

add_library(interp ${INTERPRETER_LIB_DEPS})
add_executable(custom_interpreter main.cpp)
target_link_libraries(custom_interpreter interp)
