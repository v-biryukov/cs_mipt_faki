cmake_minimum_required(VERSION 3.10)
project(Example)
add_executable(main main.cpp)


message("CMAKE_SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}")

message("UNIX = ${UNIX}")
message("WIN32 = ${WIN32}")
message("APPLE = ${APPLE}")
message("MSVC = ${MSVC}")