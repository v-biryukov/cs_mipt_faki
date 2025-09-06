cmake_minimum_required(VERSION 3.21)
project(CacheVarsExample)
add_executable(main main.cpp)


set(ALICE "Dog")

set(ALICE "Cat" CACHE STRING "This is Alice's variable")

message("Variable ALICE = ${ALICE}")


#unset(ALICE)
#message("Variable ALICE = ${ALICE}")

