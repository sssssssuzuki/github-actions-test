cmake_minimum_required(VERSION 3.1)

set (CMAKE_CXX_STANDARD 17)

add_executable(example main.cpp)
include_directories(../include)
target_link_libraries(example sayhello)
