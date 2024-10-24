cmake_minimum_required(VERSION 3.0)

file(GLOB_RECURSE src
  "src/**.cpp")

file(GLOB_RECURSE headers
  "include/**.h")

file(GLOB_RECURSE vendor_libs
"../vendor/**.lib")

file(GLOB_RECURSE vendor_dlls
"../vendor/**.dll")

file(GLOB_RECURSE vendor_headers 
  "../vendor/**.h")


project(Circuit-App VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(Circuit-App  ${src} ${headers})

include_directories("../vendor/")
include_directories("include/")
target_link_libraries(Circuit-App ${vendor_libs})