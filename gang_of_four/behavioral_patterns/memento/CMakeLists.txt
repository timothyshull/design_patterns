include_directories(./ ../../foundation_classes)

set(MEMENTO_SRCS
        Constraint_solver.cpp
        Constraint_solver.h
        Constraint_solver_memento.cpp
        Constraint_solver_memento.h
        Graphic.cpp
        Graphic.h
        memento_main.cpp
        Move_command.cpp
        Move_command.h)

add_executable(memento ${MEMENTO_SRCS})