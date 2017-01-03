cmake_minimum_required(VERSION 3.6)
project(design_patterns CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

add_subdirectory(custom)
add_subdirectory(gang_of_four)
