cmake_minimum_required(VERSION 3.10)
project(CacheVarsExample)

set(ALICE "Cat" CACHE STRING "This is Alice's string variable")
set(BOB "../0env/0path.cmake" CACHE FILEPATH "This is Bob's path variable")
set(CASPER "ON" CACHE BOOL "This is Casper's bool variable")

add_executable(main main.cpp)