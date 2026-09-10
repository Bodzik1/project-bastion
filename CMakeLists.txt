cmake_minimum_required(VERSION 3.20)

project(ProjectBastion
    VERSION 0.1.0
    LANGUAGES CXX
)

include(FetchContent)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 6.0
    GIT_SHALLOW TRUE
)

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(raylib)

add_executable(ProjectBastion
    src/main.cpp
    src/Tower.cpp
    headers/Tower.h
)

target_include_directories(ProjectBastion PRIVATE headers)

target_compile_features(ProjectBastion PRIVATE cxx_std_20)

target_link_libraries(ProjectBastion PRIVATE raylib)

if(MSVC)
    target_compile_options(ProjectBastion PRIVATE
        /W4
        /permissive-
    )
else()
    target_compile_options(ProjectBastion PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        -Wconversion
        -Wsign-conversion
    )
endif()
