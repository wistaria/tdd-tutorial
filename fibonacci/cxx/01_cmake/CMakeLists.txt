cmake_minimum_required(VERSION 3.14)
project(fibonacci CXX)
set(CMAKE_CXX_STANDARD 14)

add_executable(fibonacci fibonacci.cpp)
target_compile_options(fibonacci PRIVATE -Wall -Wextra)
