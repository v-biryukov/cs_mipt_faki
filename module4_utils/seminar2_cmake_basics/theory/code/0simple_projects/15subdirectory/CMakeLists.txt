cmake_minimum_required(VERSION 3.10)
project(CubeProject)

add_subdirectory(cube)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC cube)