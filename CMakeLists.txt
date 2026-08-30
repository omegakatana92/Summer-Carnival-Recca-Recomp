cmake_minimum_required(VERSION 3.20)
project(ReccaRecomp C)

set(CMAKE_C_STANDARD 11)

set(NESRECOMP_ROOT "C:/Users/omega/Documents/tools/nesrecomp-recca" CACHE PATH "Path to NESRecomp")
include(${NESRECOMP_ROOT}/runner/runner.cmake)

find_package(SDL2 REQUIRED)

file(GLOB GENERATED_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/generated/*_full.c"
  "${CMAKE_CURRENT_SOURCE_DIR}/generated/*_dispatch.c")
file(GLOB GAME_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/*.c")

add_executable(ReccaRecomp
  ${NESRECOMP_RUNNER_SOURCES}
  ${GAME_SOURCES}
  ${GENERATED_SOURCES}
)
target_include_directories(ReccaRecomp PRIVATE
  "${CMAKE_CURRENT_SOURCE_DIR}/framework/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/generated"
  ${NESRECOMP_RUNNER_INCLUDE_DIRS}
)
target_link_libraries(ReccaRecomp PRIVATE SDL2::SDL2)

if(WIN32)
  add_custom_command(TARGET ReccaRecomp POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${CMAKE_CURRENT_SOURCE_DIR}/build/SDL2.dll"
    $<TARGET_FILE_DIR:ReccaRecomp>)
endif()
