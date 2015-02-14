set(KMLREGIONATOR_SRC
    feature_list_region_handler.cc
    regionator.cc
    regionator_util.cc
)

add_library(kmlregionator SHARED ${KMLREGIONATOR_SRC})

target_link_libraries(kmlregionator kmlbase)
