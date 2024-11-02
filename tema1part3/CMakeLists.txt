cmake_minimum_required(VERSION 3.10.0)

project(Auto)
set(CMAKE_CXX_STANDARD 17)

set(SOURCES
main.cpp
Masina.cpp)
add_executable(Auto ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)