include_directories(builder abstract_factory)

set(creational_patterns_SRCS
    BombedMazeFactory.cpp
    BombedMazeGame.cpp
    BombedWall.cpp
    Door.cpp
    DoorNeedingSpell.cpp
    EnchantedMazeFactory.cpp
    EnchantedRoom.cpp
    Maze.cpp
    MazeFactory.cpp
    MazeGame.cpp
    Room.cpp
    RoomWithABomb.cpp
    Wall.cpp)

add_library(creational_patterns SHARED ${creational_patterns_SRCS})

add_subdirectory(abstract_factory)
add_subdirectory(builder)
add_subdirectory(factory_method)
add_subdirectory(prototype)
add_subdirectory(singleton)
