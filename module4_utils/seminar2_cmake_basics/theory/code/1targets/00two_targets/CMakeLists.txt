cmake_minimum_required(VERSION 3.10)
project(VolumeProject)

set(CMAKE_CXX_STANDARD 20)

add_library(cube STATIC ./cube/src/cube.cpp ./cube/include/cube.hpp)
target_include_directories(cube PUBLIC ./cube/include)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC cube)