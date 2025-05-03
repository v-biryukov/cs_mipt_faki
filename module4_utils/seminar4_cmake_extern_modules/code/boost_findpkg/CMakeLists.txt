cmake_minimum_required(VERSION 3.10)
project(boostExample)


add_executable(app main.cpp)

find_package(Boost 1.70 REQUIRED COMPONENTS filesystem system)

if(Boost_FOUND)
    target_include_directories(app PUBLIC ${Boost_INCLUDE_DIRS})
    message(STATUS "Boost found: ${Boost_VERSION}")
endif()


#target_link_libraries(app PRIVATE ${Boost_LIBRARIES})
target_link_libraries(app PRIVATE Boost::filesystem Boost::system)