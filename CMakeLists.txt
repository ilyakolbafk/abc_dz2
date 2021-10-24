# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(abc_dz2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        # Headers
        Rand.h
        Common.h
        Diagonal.h
        Matrix.h
        Container.h
        Triangularn.h

        # Sources
        Common.cpp
        Diagonal.cpp
        Matrix.cpp
        Container.cpp
        main.cpp
        Triangularn.cpp
        Rand.cpp)

add_executable(abc_dz2 ${SOURCE_FILES})
