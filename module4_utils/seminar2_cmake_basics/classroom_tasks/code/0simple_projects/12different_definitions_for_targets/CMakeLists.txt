cmake_minimum_required(VERSION 3.10)
project(DifferentDefinitionsProject)

add_library(other STATIC other.cpp other.hpp)
target_compile_definitions(other PRIVATE DOG)

add_executable(main main.cpp)
target_compile_definitions(main PUBLIC CAT)


target_link_libraries(main PUBLIC other)