cmake_minimum_required(VERSION 3.23)

### Using Hunter ###
include("cmake/HunterGate.cmake")
HunterGate(
        URL "https://github.com/cpp-pm/hunter/archive/v0.24.8.tar.gz"
        SHA1 "ca7838dded9a1811b04ffd56175f629e0af82d3d"
)

#   Project Knuckle Ball   #
project(knuckleball)

### Dependencies ###
hunter_add_package(Boost COMPONENTS regex system filesystem)      # Boost
find_package(Boost CONFIG REQUIRED regex system filesystem)
hunter_add_package(RapidJSON)
find_package(RapidJSON CONFIG REQUIRED)

# C++20
set(CMAKE_CXX_STANDARD 20)

include_directories(.)

### knuckleball.exe ###
add_executable(knuckleball
        booya.cpp
        booya.h
        main.cpp)

### Dependencies - Libraries ###
target_link_libraries(knuckleball PUBLIC Boost::regex Boost::system Boost::filesystem)
target_link_libraries(knuckleball PUBLIC RapidJSON::rapidjson)

