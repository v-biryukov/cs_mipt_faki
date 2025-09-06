cmake_minimum_required(VERSION 3.10)
project(Example)
add_executable(main main.cpp)


message("CMAKE_C_COMPILER = ${CMAKE_C_COMPILER}")
message("CMAKE_CXX_COMPILER = ${CMAKE_CXX_COMPILER}")

message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
message("CMAKE_C_FLAGS = ${CMAKE_C_FLAGS}")
message("CMAKE_CXX_FLAGS = ${CMAKE_CXX_FLAGS}")
message("CMAKE_EXE_LINKER_FLAGS = ${CMAKE_EXE_LINKER_FLAGS}")

message("CMAKE_GENERATOR = ${CMAKE_GENERATOR}")
message("CMAKE_MAKE_PROGRAM = ${CMAKE_MAKE_PROGRAM}")

message("CMAKE_PREFIX_PATH = ${CMAKE_PREFIX_PATH}")
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")