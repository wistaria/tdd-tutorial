cmake_minimum_required(VERSION 3.14)
project(fibonacci NONE)
find_package (Python)

execute_process(COMMAND ${Python_EXECUTABLE} -m venv ${CMAKE_BINARY_DIR}/venv)
set(ENV{VIRTUAL_ENV} ${CMAKE_BINARY_DIR}/venv)
set(Python_FIND_VIRTUALENV FIRST)
unset(Python_EXECUTABLE)
find_package(Python)
execute_process(COMMAND ${Python_EXECUTABLE} -m pip install -r ${CMAKE_SOURCE_DIR}/requirements.txt)
enable_testing()

foreach(name fibonacci lucas)
  configure_file(${name} ${name} FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)

  add_test(test_${name} ${Python_EXECUTABLE} -m pytest ${CMAKE_CURRENT_SOURCE_DIR}/test_${name}.py)
endforeach(name)
