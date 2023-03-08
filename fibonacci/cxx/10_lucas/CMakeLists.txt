cmake_minimum_required(VERSION 3.14)
project(fibonacci CXX)
set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED)

include(FetchContent)
FetchContent_Declare(catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.1.0
)
FetchContent_MakeAvailable(Catch2)
enable_testing()

foreach(name fibonacci lucas)
  add_executable(${name} ${name}.cpp)
  target_compile_options(${name} PRIVATE -Wall -Wextra)
  target_link_libraries(${name} PRIVATE Boost::boost)

  add_executable(test_${name} test_${name}.cpp)
  target_compile_options(test_${name} PRIVATE -Wall -Wextra)
  target_link_libraries(test_${name} PRIVATE Boost::boost Catch2::Catch2WithMain)
  add_test(test_${name} test_${name})
endforeach(name)
