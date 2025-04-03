cmake_minimum_required(VERSION 3.10)
project(setFeaturesProject)

add_executable(main main.cpp)
target_compile_features(main PUBLIC cxx_std_17 cxx_lambdas)