cmake_minimum_required(VERSION 3.5.1)
project(VkConsoleClient)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "..")

add_subdirectory(src)