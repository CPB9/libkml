find_package(ZLIB REQUIRED)

include_directories(${ZLIB_INCLUDE_DIRS})

set(MINIZIP_SRC
    contrib/minizip/unzip.c
    contrib/minizip/ioapi.c
    contrib/minizip/iomem_simple.c
    contrib/minizip/zip.c
)

add_definitions(-fPIC -DPIC)

add_library(minizip ${MINIZIP_SRC})

target_link_libraries(minizip ${ZLIB_LIBRARIES})

