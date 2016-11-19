cmake_minimum_required(VERSION 3.5.1)
project(Main)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lpanel")

set(SOURCE_FILES main.cpp main.h PanelBase.cpp PanelBase.h StatusBar.cpp StatusBar.h ResManager.cpp ResManager.h)

add_executable(Main ${SOURCE_FILES})
include_directories("./")
target_link_libraries(Main ${CURSES_LIBRARIES} panel)