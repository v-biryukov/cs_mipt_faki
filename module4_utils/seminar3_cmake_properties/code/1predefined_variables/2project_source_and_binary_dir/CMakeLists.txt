cmake_minimum_required(VERSION 3.10)
project(ExampleMain)

message("")
message("main: PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message("main: PROJECT_BUILD_DIR = ${PROJECT_BINARY_DIR}")


add_executable(main main.cpp)
add_subdirectory(cube)
target_link_libraries(main PUBLIC cube)
