cmake_minimum_required(VERSION 3.0.0)
project(default C)
add_compile_options(-std=c11)

include(CTest)
enable_testing()

add_executable(default struct.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
