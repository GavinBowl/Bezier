cmake_minimum_required(VERSION 3.10)

project(Bezier)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

include(cmake/CPM.cmake)
include(cmake/depend.cmake)

add_executable(Bezier main.cpp src/utils.cpp)

target_link_libraries(Bezier PUBLIC Eigen3::Eigen spdlog::spdlog)