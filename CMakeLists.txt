cmake_minimum_required(VERSION 2.8.11)

project(libkml)

if(NOT WIN32)
    add_definitions(-fPIC -DPIC)
endif()

if(MSVC)
    add_definitions(/D_CRT_SECURE_NO_WARNINGS=1)
endif()

find_package(ZLIB)
if(NOT ${ZLIB_FOUND})
    add_subdirectory(third_party/zlib-1.2.8 EXCLUDE_FROM_ALL)
    set(ZLIB_INCLUDE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/zlib-1.2.8
        ${CMAKE_CURRENT_BINARY_DIR}/third_party/zlib-1.2.8
        FORCE
    )
    set(ZLIB_LIBRARIES zlibstatic)
endif()

add_subdirectory(third_party/kml-minizip/minizip)
add_subdirectory(third_party/uriparser-0.7.5)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/kml-minizip)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/uriparser-0.7.5/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/boost_1_34_1)
include_directories(${ZLIB_INCLUDE_DIRS})

find_package(EXPAT)
if(NOT ${EXPAT_FOUND})
    add_subdirectory(third_party/expat-2.1.0 EXCLUDE_FROM_ALL)
    set(EXPAT_INCLUDE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/expat-2.1.0/lib
        ${CMAKE_CURRENT_BINARY_DIR}/third_party/expat-2.1.0
        FORCE
    )
    set(EXPAT_LIBRARIES expat)
    add_definitions(-DXML_STATIC)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(src/kml)

get_directory_property(HAS_PARENT_SCOPE PARENT_DIRECTORY)
if(HAS_PARENT_SCOPE)
    set(LIBKML_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/src PARENT_SCOPE)
endif()
