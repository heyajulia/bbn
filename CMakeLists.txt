cmake_minimum_required(VERSION 3.10)

project(bbn VERSION 1.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(bbn ${SOURCES})

target_include_directories(bbn PRIVATE "src")

target_compile_options(bbn PRIVATE -Wall -Wextra -Wpedantic)
