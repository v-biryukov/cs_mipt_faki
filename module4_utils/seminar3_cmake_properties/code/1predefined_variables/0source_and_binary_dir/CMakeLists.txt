cmake_minimum_required(VERSION 3.10)
project(Example)
add_executable(main main.cpp)


message("CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message("CMAKE_BINARY_DIR = ${CMAKE_BINARY_DIR}")


message("PROJECT_NAME = ${PROJECT_NAME}")
message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR = ${PROJECT_BINARY_DIR}")