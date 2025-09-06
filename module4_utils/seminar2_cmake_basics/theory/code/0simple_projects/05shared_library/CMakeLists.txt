cmake_minimum_required(VERSION 3.10)
project(CubeProject)

add_library(cube SHARED cube/src/cube.cpp cube/include/cube.hpp)
target_include_directories(cube PUBLIC cube/include)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC cube)