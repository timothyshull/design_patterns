include_directories(../../foundation_classes)

set(proxy_SRCS
        Graphic.cpp
        Text_document.cpp
        Image.cpp
        Image_proxy.cpp)

add_executable(proxy main.cpp)
add_library(proxylib SHARED ${proxy_SRCS})
target_link_libraries(proxylib foundation_classes)
target_link_libraries(proxy proxylib)
