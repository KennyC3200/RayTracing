cmake_minimum_required(VERSION 3.5...3.11)
project(RayTracing)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_compile_options(
    -g
    -Wall
    -Wextra
    -Werror
    -Wfloat-conversion
    -Wunused
    -Wunused-parameter
    -O3
)

add_executable(RayTracing Source/RayTracing.cpp)

add_subdirectory(Source/Utils)
add_subdirectory(Source/Graphics)
target_link_libraries(RayTracing
    PUBLIC Utils
    PUBLIC Graphics
)

# Append the cmake directory so no need to specify <cmake_folder>/*.cmake
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# Inject code from project-provided modules
include(Debug)
include(Settings)

add_custom_target(Run
    COMMAND ./RayTracing
    DEPENDS RayTracing
    COMMENT Running RayTracing
)
