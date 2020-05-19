cmake_minimum_required(VERSION 3.10)
project(canopenlib)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

set(STATIC_LIBRARY_NAME ${PROJECT_NAME})
set(INCLUDE_INSTALL_DIR include)
set(LIB_INSTALL_DIR lib)
set(CONFIG_CMAKE_IN_FILENAME ${PROJECT_NAME}Config.cmake.in)

add_subdirectory(src)

