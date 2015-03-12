cmake_minimum_required(VERSION 2.8.4)
project(sdl2uipy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

if (WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -include cmath -static")

    include_directories("K:/Python27/include")
    include_directories(".")
    link_directories("K:/Python27/libs")
else()
    find_package(PythonLibs REQUIRED)
    include_directories(${PYTHON_INCLUDE_PATH})
    link_directories(${PYTHON_LIBRARIES})
endif()


file(GLOB SOURCE_FILES src/*.cpp)
add_library(sdl2uipy SHARED ${SOURCE_FILES})

if (WIN32)
    target_link_libraries(sdl2uipy boost_python-vc110-mt-1_56.lib)
    target_link_libraries(sdl2uipy python27.lib)
else()
    target_link_libraries(sdl2uipy boost_python)
    target_link_libraries(sdl2uipy python2.7)
endif()
