cmake_minimum_required(VERSION 3.10)
project(setDefinitionsProject)

add_executable(main main.cpp)
target_compile_definitions(main PUBLIC CAT)