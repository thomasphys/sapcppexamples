cmake_minimum_required(VERSION 3.6)
project(hellolib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_INSTALL_INCLUDEDIR ${CMAKE_CURRENT_BINARY_DIR}/analysislib/include)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(CMAKE_INSTALL_LIBDIR ${CMAKE_CURRENT_BINARY_DIR}/lib)

set(HELLOLIB_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/src/helloclass.cpp)

add_library(hellolib SHARED ${HELLOLIB_SOURCE})
target_include_directories(hellolib PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include
                                    SYSTEM INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

list(APPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_BINARY_DIR})

install(TARGETS hellolib DESTINATION lib)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/helloclass.h DESTINATION include)
