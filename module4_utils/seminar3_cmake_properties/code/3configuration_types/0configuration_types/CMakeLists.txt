cmake_minimum_required(VERSION 3.27)
project(Example)
add_executable(main main.cpp)


message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")

message("CMAKE_CONFIGURATION_TYPES = ${CMAKE_CONFIGURATION_TYPES}")

get_property(OUT GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
message("OUT = ${OUT}")