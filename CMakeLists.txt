cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(DHT22_Project C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(DHT22_example
    main.c
    DHT22.c
)

target_include_directories(DHT22_example PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(DHT22_example pico_stdlib)

pico_add_extra_outputs(DHT22_example)
