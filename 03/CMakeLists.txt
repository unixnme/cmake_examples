cmake_minimum_required (VERSION 2.6)
project (Tutorial)
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_SOURCE_DIR}/MathFunctions") # -I
add_subdirectory (MathFunctions) # must contain CMakeLists.txt
 
# add the executable
add_executable(Tutorial tutorial.cxx)
target_link_libraries (Tutorial MathFunctions)

