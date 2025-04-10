cmake_minimum_required(VERSION 3.10)
project(Example)

add_executable(main main.cpp)

add_custom_target(
    print_message ALL
    COMMAND echo Hello World Build Time!
)