cmake_minimum_required(VERSION 3.5)

project(Lab4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(HEADER
    ${CMAKE_CURRENT_SOURCE_DIR}/vector2.h
)

set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/vector2.cpp
)

add_executable(Lab4 ${SOURCE} ${HEADER})

