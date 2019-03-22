cmake_minimum_required (VERSION 2.6)
project (Tutorial)

add_definitions(-DMACRO=1)
add_executable(Tutorial tutorial.cxx)
