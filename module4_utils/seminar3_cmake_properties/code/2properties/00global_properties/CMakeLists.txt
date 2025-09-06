#[[
    Команда get_property - получить свойство.
    Команда set_property - задать свойство.

    Виды свойств:

        GLOBAL
        DIRECTORY 
        TARGET 
        SOURCE
        INSTALL
        TEST
        CACHE VARIABLE
]]

cmake_minimum_required(VERSION 3.21)
project(Example)
add_executable(main main.cpp)


get_property(OUT GLOBAL PROPERTY CMAKE_CXX_KNOWN_FEATURES)
message("OUT = ${OUT}")


set_property(GLOBAL PROPERTY ALICE Cat)
get_property(OUT GLOBAL PROPERTY ALICE)
message("OUT = ${OUT}")
