cmake_minimum_required(VERSION 3.0.0)
project(ANSI-ESCAPE-CODES VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(fmt)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(include)

add_library(ANSI-ESCAPE-CODES src/ansi_codes.cpp)
add_library(ANSI-ESCAPE-CODES-STATIC STATIC src/ansi_codes.cpp)

find_package(fmt)
target_link_libraries(ANSI-ESCAPE-CODES PRIVATE fmt::fmt)
target_link_libraries(ANSI-ESCAPE-CODES-STATIC PRIVATE fmt::fmt)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
