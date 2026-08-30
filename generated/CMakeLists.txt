cmake_minimum_required(VERSION 3.20)
project(Summer-Carnival-92---Recca-Japan_recompiled C)

set(NESRECOMP_GENERATED_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/Summer-Carnival-92---Recca-Japan_full.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/Summer-Carnival-92---Recca-Japan_dispatch.c"
)
file(GLOB NESRECOMP_BANK_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/Summer-Carnival-92---Recca-Japan_full_bank*.c"
)

add_library(nesrecomp_game STATIC
    ${NESRECOMP_GENERATED_SOURCES}
    ${NESRECOMP_BANK_SOURCES}
)
target_include_directories(nesrecomp_game PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/framework/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/generated"
)
set_target_properties(nesrecomp_game PROPERTIES
    C_STANDARD 11
    C_STANDARD_REQUIRED YES
)
