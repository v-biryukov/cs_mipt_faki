
message("")
message("cube: CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message("cube: CMAKE_BUILD_DIR = ${CMAKE_BINARY_DIR}")
message("cube: CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
message("cube: CMAKE_CURRENT_BUILD_DIR = ${CMAKE_CURRENT_BINARY_DIR}")
message("")

add_library(cube STATIC cube.cpp cube.hpp)
target_include_directories(cube PUBLIC .)
