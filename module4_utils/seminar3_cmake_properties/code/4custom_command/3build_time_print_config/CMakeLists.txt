cmake_minimum_required(VERSION 3.10)
project(Example)

add_executable(main main.cpp)

add_custom_target(
    print_message ALL
    COMMAND cmake -E echo "Build type = ${CMAKE_BUILD_TYPE}"
)