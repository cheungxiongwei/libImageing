cmake_minimum_required(VERSION 3.22)
project(libImageing C)

set(CMAKE_C_STANDARD 99)

add_compile_definitions(UNICODE __SSE4_2__)

add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/arch:SSE2>")

include(libImaging/CMakeLists.txt)

add_library(libImageing SHARED ${HEADERS_FILES} ${SOURCES_FILES})

add_executable(main  ${HEADERS_FILES} ${SOURCES_FILES} main.c)