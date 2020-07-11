cmake_minimum_required(VERSION 3.10)

project(bit_array)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(HEADERS
    headers/bit_array.h
)

set(SOURCES
    main.cpp
    src/bit_array.cpp
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/headers
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(bit_array ${SOURCES} ${HEADERS})
