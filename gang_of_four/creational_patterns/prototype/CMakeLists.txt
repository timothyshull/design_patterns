include_directories(..)

set(prototype_SRCS Maze_prototype_factory.cpp)

add_library(prototype SHARED ${prototype_SRCS})

add_executable(prototype1 prototype1.cpp)

target_link_libraries(prototype1 prototype creational_patterns)
