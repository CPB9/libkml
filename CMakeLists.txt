cmake_minimum_required(VERSION 2.8.11)

project(libkml)

add_subdirectory(third_party/zlib-1.2.3)
add_subdirectory(third_party/uriparser-0.7.5)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/uriparser-0.7.5/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/zlib-1.2.3/contrib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/boost_1_34_1)
add_subdirectory(src/kml)
