include_directories(../behavioral_patterns/iterator)

set(foundation_classes_SRCS
        Coord.cpp
        Point.cpp
        Rect.cpp)

add_library(foundation_classes SHARED ${foundation_classes_SRCS})
