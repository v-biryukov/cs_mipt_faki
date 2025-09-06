#[[
    Свойства исходных файлов:

    COMPILE_DEFINITIONS
    COMPILE_OPTIONS
    INCLUDE_DIRECTORIES
    

]]
cmake_minimum_required(VERSION 3.21)
project(Example)

add_executable(main main.cpp cube.cpp cube.hpp)

set_property(SOURCE cube.cpp PROPERTY COMPILE_DEFINITIONS CAT)
#set_property(SOURCE main.cpp PROPERTY COMPILE_DEFINITIONS CAT)
