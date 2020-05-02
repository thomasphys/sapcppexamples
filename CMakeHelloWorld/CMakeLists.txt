cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
project(helloworldproject)

add_executable(helloworld src/helloworld.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)

#----------------------------------------------------------------------------
# Install the executable to 'bin' directory under CMAKE_INSTALL_PREFIX
#

install(TARGETS helloworld DESTINATION bin)

