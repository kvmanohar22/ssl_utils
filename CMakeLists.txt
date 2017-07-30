cmake_minimum_required(VERSION 2.8)
project(Geometry)

list(APPEND CMAKE_CXX_FLAGS "-std=c++11")
set (SRCS
  src/point.cpp)

set(target geometry_lib)
add_library(${target} ${SRCS})
set_target_properties(${target}
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "../lib"
  RUNTIME_OUTPUT_DIRECTORY "../lib")
