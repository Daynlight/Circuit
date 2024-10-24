cmake_minimum_required(VERSION 3.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "../bin/")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "../output/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../output/")

add_subdirectory(Circuit-Core)
add_subdirectory(Circuit-Editor)
add_subdirectory(Circuit-App)
add_subdirectory(dlls)
add_subdirectory(vendor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Circuit-App)