cmake_minimum_required(VERSION 2.8.4)
project(sdl2uipy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -include cmath -static")

include_directories("K:/Python27/include")
link_directories("K:/Python27/libs")


file(GLOB SOURCE_FILES src/*.cpp)
add_library(sdl2uipy SHARED ${SOURCE_FILES})
#target_link_libraries(sdl2uipy boost_system.lib)

target_link_libraries(sdl2uipy boost_python-vc110-mt-1_56.lib)
target_link_libraries(sdl2uipy python27.lib)
