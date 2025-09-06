cmake_minimum_required(VERSION 3.10)
project(CacheVarsExample)

set(ALICE "Cat" CACHE STRING "This is Alice's variable" FORCE)

add_executable(main main.cpp)

message("Variable ALICE = ${ALICE}")