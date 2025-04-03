cmake_minimum_required(VERSION 3.10)
project(setOptionsProject)

add_executable(main main.cpp)
target_compile_options(main PUBLIC -O2 -Wall -Wextra)