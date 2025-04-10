cmake_minimum_required(VERSION 3.10)
project(CacheVarsExample)

option(BUILD_CAT "Build cat.cpp into executable" ON)
option(BUILD_DOG "Build cat.cpp into executable" OFF)
option(USE_OPTIMISATION "Use O2 optimisation" OFF)

if(BUILD_CAT)
    add_executable(cat cat.cpp)
endif()

if(BUILD_DOG)
    add_executable(dog dog.cpp)
endif()

if(USE_OPTIMISATION)
    target_compile_options(cat -O2)
    target_compile_options(dog -O2)
endif()