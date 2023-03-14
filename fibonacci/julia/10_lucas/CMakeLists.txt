cmake_minimum_required(VERSION 3.14)
project(fibonacci NONE)
find_program(Julia_EXECUTABLE julia REQUIRED)
message(STATUS "Found Julia executable: ${Julia_EXECUTABLE}")
enable_testing()

foreach(name fibonacci lucas)
  configure_file(${name} ${name} FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)

  add_test(test_${name} ${Julia_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test_${name}.jl)
endforeach(name)
