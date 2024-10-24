cmake_minimum_required(VERSION 3.0)

file(GLOB_RECURSE src
  "src/**.cpp")

file(GLOB_RECURSE headers
  "include/**.h")

file(GLOB_RECURSE vendor_libs
  "../vendor/lib/**.lib")

file(GLOB_RECURSE vendor_headers 
  "../vendor/**.h")


project(Circuit-App VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(Circuit-App  ${src} ${headers})

include_directories("../vendor/")
include_directories("include/")

target_link_libraries(Circuit-App ${vendor_libs})

add_custom_command(TARGET Circuit-App POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "../vendor/dlls"
        ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}$<CONFIG>/)    