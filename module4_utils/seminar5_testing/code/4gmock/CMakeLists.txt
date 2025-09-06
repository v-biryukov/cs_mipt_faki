cmake_minimum_required(VERSION 3.17)
project(LinkedListTesting)
enable_testing()


include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)


add_executable(myTest myTest.cpp)
target_link_libraries(myTest PRIVATE gtest gmock gtest_main)

add_test(NAME t1 COMMAND myTest)