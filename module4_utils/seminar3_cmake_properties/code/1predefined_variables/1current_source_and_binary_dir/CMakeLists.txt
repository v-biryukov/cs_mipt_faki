cmake_minimum_required(VERSION 3.10)
project(Example)

message("")
message("main: CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message("main: CMAKE_BUILD_DIR = ${CMAKE_BINARY_DIR}")
message("main: CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
message("main: CMAKE_CURRENT_BUILD_DIR = ${CMAKE_CURRENT_BINARY_DIR}")


add_executable(main main.cpp)
add_subdirectory(cube)
target_link_libraries(main PUBLIC cube)
