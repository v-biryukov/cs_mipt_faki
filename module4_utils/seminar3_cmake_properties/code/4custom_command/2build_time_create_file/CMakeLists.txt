cmake_minimum_required(VERSION 3.10)
project(Example)

add_executable(main main.cpp)

add_custom_target(
    create_file ALL
    COMMAND cmake -E touch result.txt 
    COMMAND cmake -E echo "Hello World" > result.txt
)