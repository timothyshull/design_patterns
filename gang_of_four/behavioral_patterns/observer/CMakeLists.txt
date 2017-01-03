include_directories(./ ../../foundation_classes)
include_directories(../iterator)

set(observer_SRCS
    ClockTimer.cpp
    DigitalClock.cpp
    Subject.cpp)

add_library(observer SHARED ${observer_SRCS})
target_link_libraries(observer foundation_classes)

#add_executable(observer1 observer.cpp)
#target_link_libraries(observer1 observer)
