set(KMLBASE_SRC
    attributes.cc
    csv_splitter.cc
    date_time.cc
    expat_handler_ns.cc
    expat_parser.cc
    file.cc
    file_posix.cc
    math_util.cc
    mimetypes.cc
    referent.cc
    string_util.cc
    time_util.cc
    uri_parser.cc
    version.cc
    xml_namespaces.cc
    zip_file.cc
)

add_library(kmlbase SHARED ${KMLBASE_SRC})

target_link_libraries(kmlbase
    ${EXPAT_LIBRARIES}
    minizip
    uriparser
)
