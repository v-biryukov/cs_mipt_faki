cmake_minimum_required(VERSION 3.10)
project(Example)

message("")
message("main: CMAKE_CURRENT_LIST_DIR = ${CMAKE_CURRENT_LIST_DIR}")
message("main: CMAKE_CURRENT_LIST_FILE = ${CMAKE_CURRENT_LIST_FILE}")

include(scripts/script.cmake)

add_executable(main main.cpp)
