cmake_minimum_required(VERSION 3.28)

include(pico_sdk_import.cmake)

project(blink C CXX)

set(CMAKE_C_STANDARD 11)

pico_sdk_init()

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} pico_stdlib)

pico_add_extra_outputs(blink)
