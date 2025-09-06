project(ExampleCube)

message("")
message("cube: PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message("cube: PROJECT_BUILD_DIR = ${PROJECT_BINARY_DIR}")
message("")

add_library(cube STATIC cube.cpp cube.hpp)
target_include_directories(cube PUBLIC .)
