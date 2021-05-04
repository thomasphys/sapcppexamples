cmake_minimum_required(VERSION 3.6)
project(hellolib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(hellolib SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/helloclass.cpp)

list(APPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_BINARY_DIR})

add_executable(helloworld main.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)
target_link_libraries(helloworld PRIVATE hellolib)
