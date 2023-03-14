cmake_minimum_required(VERSION 3.14)
project(fibonacci NONE)
find_program(Julia_EXECUTABLE julia REQUIRED)
message(STATUS "Found Julia executable: ${Julia_EXECUTABLE}")
enable_testing()

configure_file(fibonacci fibonacci FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)

add_test(test_fibonacci ${Julia_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test_fibonacci.jl)
