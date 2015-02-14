cmake_minimum_required(VERSION 2.8.11)

project(libkml)

if(NOT MSVC)
    add_definitions(-fPIC -DPIC)
endif()

#find_package(ZLIB REQUIRED)
#if(NOT ${ZLIP_FOUND})
add_subdirectory(third_party/zlib-1.2.8 EXCLUDE_FROM_ALL)
    set(ZLIB_INCLUDE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/zlib-1.2.8
        ${CMAKE_CURRENT_BINARY_DIR}/third_party/zlib-1.2.8
    )
    set(ZLIB_LIBRARIES zlibstatic)
    #endif()

add_subdirectory(third_party/kml-minizip/minizip)
add_subdirectory(third_party/uriparser-0.7.5)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/kml-minizip)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/uriparser-0.7.5/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/boost_1_34_1)

#find_package(EXPAT REQUIRED)
#if(NOT ${EXPAT_FOUND})
add_subdirectory(third_party/expat-2.1.0 EXCLUDE_FROM_ALL)
    set(EXPAT_INCLUDE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/expat/lib
        ${CMAKE_CURRENT_BINARY_DIR}/third_party/expat
    )
    set(EXPAT_LIBRARIES expat)
#endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(src/kml)
