include_directories(../../../foundation_classes
        ../../../behavioral_patterns/iterator)

set(singleton_SRCS
        Custom_singleton.cpp
        Name_singleton_pair.cpp
        Singleton.cpp
        main.cpp)

add_executable(registry_of_singletons ${singleton_SRCS})
