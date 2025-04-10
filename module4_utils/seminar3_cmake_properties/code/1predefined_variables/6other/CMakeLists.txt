cmake_minimum_required(VERSION 3.21)
project(Example)
add_executable(main main.cpp)


message("CMAKE_ROOT = ${CMAKE_ROOT}")
message("CMAKE_VERSION = ${CMAKE_VERSION}")

message("CMAKE_LIBRARY_PATH = ${CMAKE_LIBRARY_PATH}")
message("CMAKE_PROGRAM_PATH = ${CMAKE_PROGRAM_PATH}")
message("CMAKE_PREFIX_PATH = ${CMAKE_PREFIX_PATH}")
