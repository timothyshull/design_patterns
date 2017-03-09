include_directories(./ ../../foundation_classes)
include_directories(../iterator)

set(observer_SRCS
        Clock_timer.cpp
        Digital_clock.cpp
        Subject.cpp
        Analog_clock.h
        Observer.h
        Widget.h)

add_library(observer SHARED ${observer_SRCS})
target_link_libraries(observer foundation_classes)

#add_executable(observer1 observer.cpp)
#target_link_libraries(observer1 observer)
