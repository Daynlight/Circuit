cmake_minimum_required(VERSION 3.0)

file(GLOB_RECURSE cpp_files
  "src/**.cpp")

file(GLOB_RECURSE h_files
  "")
  
file(GLOB_RECURSE libs
  "vendor/**.lib")

project(Circuit VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)


add_executable(Circuit ${cpp_files} ${h_files})

include_directories("include/")
target_link_libraries(Circuit ${libs})

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Circuit)