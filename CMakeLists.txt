cmake_minimum_required(VERSION 3.15)
project(multiple-configs)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(lib1)
add_subdirectory(lib2)

add_executable(main main.cpp)
target_link_libraries(main lib1 lib2)