cmake_minimum_required(VERSION 3.20)

project(CPP_TUTORIAL LANGUAGES CXX)
set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CPP_TUTORIAL
    main.cpp
)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(CPP_TUTORIAL PRIVATE -Wall -Wextra -Wpedantic)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    target_compile_options(CPP_TUTORIAL PRIVATE /W4)
endif()