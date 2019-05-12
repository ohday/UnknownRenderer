cmake_minimum_required(VERSION 3.10)

project(UnknownRenderer)

aux_source_directory(. DIR_SRCS)
add_subdirectory(Core)

add_executable(Test WIN32 TestMain.cpp)

target_link_libraries(Test Core)