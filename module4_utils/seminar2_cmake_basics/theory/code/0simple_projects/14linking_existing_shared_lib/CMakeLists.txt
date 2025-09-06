cmake_minimum_required(VERSION 3.10)
project(DifferentDefinitionsProject)


link_directories(../05shared_library/build)

add_executable(main main.cpp)

target_include_directories(main PUBLIC ../05shared_library/cube/include)
target_link_directories(main PUBLIC ../05shared_library/build)
target_link_libraries(main PUBLIC cube)
