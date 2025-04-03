cmake_minimum_required(VERSION 3.10)
project(CubeProject)

add_library(cube STATIC cube.cpp cube.hpp)
target_compile_options(cube PUBLIC -O2)

add_executable(main main.cpp)
target_compile_options(main PUBLIC -Wall -Wextra)


target_link_libraries(main PUBLIC cube)