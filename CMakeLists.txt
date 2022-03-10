cmake_minimum_required(VERSION 3.16.3)
project(calculatorv1)
add_library(
    mymath
    mymath.cpp
    mymath.hpp
)
add_executable(calculator Main.cpp )

target_link_libraries(calculator PRIVATE mymath)