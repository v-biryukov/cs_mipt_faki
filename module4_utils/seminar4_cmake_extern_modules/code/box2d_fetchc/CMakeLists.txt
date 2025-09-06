cmake_minimum_required(VERSION 3.17)
project(boxExample)
include(FetchContent)

add_executable(main main.cpp)

find_package(SFML COMPONENTS system window graphics REQUIRED)
target_link_libraries(main PUBLIC sfml-system sfml-window sfml-graphics)

FetchContent_Declare(
    Box2d
    GIT_REPOSITORY https://github.com/erincatto/box2d.git
    GIT_TAG v3.0.0
)
FetchContent_MakeAvailable(Box2d)

target_link_libraries(main PUBLIC box2d)
