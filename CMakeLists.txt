cmake_minimum_required(VERSION 3.2)
project(Cellular_Automata)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Cellular_Automata ${SOURCE_FILES} Cell_1D.h Cell_1D.cpp)