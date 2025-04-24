cmake_minimum_required(VERSION 3.17)
project(TestingExample)
enable_testing()

add_executable(main main.cpp factorial.cpp factorial.hpp)


add_executable(test1 test1.cpp factorial.cpp factorial.hpp)
add_executable(test2 test2.cpp factorial.cpp factorial.hpp)

add_test(NAME simple COMMAND test1)
add_test(NAME exceptions COMMAND test2)