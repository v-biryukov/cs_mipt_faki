#[[
    Свойства директорий:

        VARIABLES
        CACHE_VARIABLES
        SUBDIRECTORIES
        TESTS
        PARENT_DIRECTORY


        INCLUDE_DIRECTORIES
        LINK_DIRECTORIES
        COMPILE_OPTIONS
        LINK_OPTIONS
        COMPILE_DEFINITIONS

]]

cmake_minimum_required(VERSION 3.21)
project(Example)
add_subdirectory(cube)
add_executable(main main.cpp)
target_link_libraries(main PUBLIC cube)

set(ALICE "Cat")

get_property(OUT DIRECTORY PROPERTY VARIABLES)
message("\n\nVARIABLES = ${OUT}")

get_property(OUT DIRECTORY PROPERTY CACHE_VARIABLES)
message("\n\nCACHE_VARIABLES = ${OUT}")