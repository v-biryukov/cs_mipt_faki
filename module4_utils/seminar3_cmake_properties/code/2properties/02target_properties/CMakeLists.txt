#[[
    Свойства таргетов:

    
    SOURCES
    INCLUDE_DIRECTORIES
    LINK_DIRECTORIES
    LINK_LIBRARIES
    COMPILE_DEFINITIONS
    COMPILE_FEATURES
    COMPILE_OPTIONS
    LINK_OPTIONS

    INTERFACE_SOURCES
    INTERFACE_INCLUDE_DIRECTORIES
    INTERFACE_LINK_DIRECTORIES
    INTERFACE_LINK_LIBRARIES
    INTERFACE_COMPILE_DEFINITIONS
    INTERFACE_COMPILE_FEATURES
    INTERFACE_COMPILE_OPTIONS
    INTERFACE_LINK_OPTIONS


    OUTPUT_NAME
    OUTPUT_NAME_<CONFIG>
    LIBRARY_OUTPUT_DIRECTORY
    LIBRARY_OUTPUT_DIRECTORY_<CONFIG>
    RUNTIME_OUTPUT_DIRECTORY
    RUNTIME_OUTPUT_DIRECTORY_<CONFIG>

]]

cmake_minimum_required(VERSION 3.21)
project(Example)
add_executable(main main.cpp)
target_compile_options(main PUBLIC -Wall)
target_compile_options(main PRIVATE -Wextra)
target_compile_options(main INTERFACE -O2)

get_property(OUT TARGET main PROPERTY COMPILE_OPTIONS)
message("\nCOMPILE_OPTIONS = ${OUT}")

get_property(OUT TARGET main PROPERTY INTERFACE_COMPILE_OPTIONS)
message("\nINTERFACE_COMPILE_OPTIONS = ${OUT}\n")