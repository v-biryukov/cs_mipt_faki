cmake_minimum_required(VERSION 3.10)
project(DifferentDefinitionsProject)

add_executable(main main.cpp)

target_include_directories(main PUBLIC ../03static_library/)
target_link_directories(main PUBLIC ../03static_library/build)
target_link_libraries(main PUBLIC cube)
