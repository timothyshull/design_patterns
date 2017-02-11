include_directories(../../foundation_classes)
include_directories(../../behavioral_patterns/iterator)

set(facade_SRCS
        Compiler.cpp
        ExpressionNode.cpp)

add_library(facade SHARED ${facade_SRCS})
