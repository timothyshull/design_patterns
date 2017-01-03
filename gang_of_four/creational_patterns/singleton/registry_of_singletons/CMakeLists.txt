include_directories(../../../foundation_classes
        ../../../behavioral_patterns/iterator)

set(singleton_SRCS
    MySingleton.cpp
    NameSingletonPair.cpp
    Singleton.cpp
    main.cpp)

add_executable(registry_of_singletons ${singleton_SRCS})
