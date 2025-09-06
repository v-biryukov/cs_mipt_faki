cmake_minimum_required(VERSION 3.10)
project(CubeProject)

add_library(cube STATIC cube.cpp cube.hpp)
add_executable(main main.cpp)

target_link_libraries(main PUBLIC cube)