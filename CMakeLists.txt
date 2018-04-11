cmake_minimum_required(VERSION 3.7)
project(CPPPrimerPlus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/chapter02/myfirst.cpp src/chapter02/carrots.cpp)
add_executable(CPPPrimerPlus ${SOURCE_FILES})