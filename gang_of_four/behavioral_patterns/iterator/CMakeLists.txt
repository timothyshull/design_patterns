include_directories(./ ../../foundation_classes)

set(ITERATOR_SRCS
        Employee.h
        Employee.cpp)

add_library(iterator SHARED ${ITERATOR_SRCS})

add_executable(iterator_main iterator_main.cpp Iterator.h ../../foundation_classes/List.h ListIterator.h ReverseListIterator.h SkipList.h)
#include"Employee.h"

add_executable(internal_list_iterator internal_list_iterator.cpp)
add_executable(external_iterator external_iterator.cpp)

target_link_libraries(iterator_main iterator)
target_link_libraries(internal_list_iterator iterator)
target_link_libraries(external_iterator iterator)
