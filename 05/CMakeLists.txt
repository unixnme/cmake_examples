cmake_minimum_required (VERSION 2.6)
project (Tutorial)

OPTION(DEFINE_MACRO "Option description" ON)
IF(DEFINE_MACRO)
    ADD_DEFINITIONS(-DMACRO)
ENDIF(DEFINE_MACRO)

add_executable(Tutorial tutorial.cxx)
