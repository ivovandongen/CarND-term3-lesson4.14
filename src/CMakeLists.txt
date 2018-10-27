add_library(core STATIC
    ${CMAKE_SOURCE_DIR}/src/cost.h
    ${CMAKE_SOURCE_DIR}/src/cost.cpp)

target_include_directories(core
    PUBLIC ${CMAKE_SOURCE_DIR}/src
    )

if (DO_CLANG_TIDY)
    set_target_properties(core PROPERTIES CXX_CLANG_TIDY "${DO_CLANG_TIDY}")
endif ()