include_directories(builder abstract_factory)

set(creational_patterns_SRCS
        Bombed_maze_factory.cpp
        Bombed_maze_game.cpp
        Bombed_wall.cpp
        Cast_spell.h
        Door.cpp
        Door_needing_spell.cpp
        Enchanted_maze_factory.cpp
        Enchanted_maze_game.h
        Enchanted_room.cpp
        Map_site.h
        Maze.cpp
        Maze_factory.cpp
        Maze_game.cpp
        Maze_parts.h
        Room.cpp
        Room_with_a_bomb.cpp
        Spell.h
        Wall.cpp)

add_library(creational_patterns SHARED ${creational_patterns_SRCS})

add_subdirectory(abstract_factory)
add_subdirectory(builder)
add_subdirectory(factory_method)
add_subdirectory(prototype)
add_subdirectory(singleton)
