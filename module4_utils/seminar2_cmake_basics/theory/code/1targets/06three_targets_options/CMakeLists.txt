cmake_minimum_required(VERSION 3.10)
project(VolumeProject)

set(CMAKE_CXX_STANDARD 20)

add_library(cube STATIC cube/src/cube.cpp cube/include/cube.hpp)
target_include_directories(cube PUBLIC cube/include)
target_compile_definitions(cube PUBLIC CAT)

add_library(volume STATIC volume/src/volume.cpp volume/include/volume.hpp)
target_include_directories(volume PUBLIC volume/include)
target_link_libraries(volume PRIVATE cube)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC volume)
target_link_libraries(main PUBLIC cube)