cmake_minimum_required(VERSION 3.23)
project(knuckleball_cpp)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(knuckleball_cpp
        booya.cpp
        booya.h
        main.cpp)
