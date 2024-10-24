cmake_minimum_required(VERSION 3.0)

add_subdirectory(Circuit-Core)
add_subdirectory(Circuit-Editor)
add_subdirectory(Circuit-App)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Circuit-App)