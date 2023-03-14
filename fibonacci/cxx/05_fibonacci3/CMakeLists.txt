cmake_minimum_required(VERSION 3.14)
project(fibonacci CXX)
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.1.0
)
FetchContent_MakeAvailable(Catch2)
enable_testing()

add_executable(fibonacci fibonacci.cpp)
target_compile_options(fibonacci PRIVATE -Wall -Wextra)

add_executable(test_fibonacci test_fibonacci.cpp)
target_compile_options(test_fibonacci PRIVATE -Wall -Wextra)
target_link_libraries(test_fibonacci PRIVATE Catch2::Catch2WithMain)
add_test(test_fibonacci test_fibonacci)
