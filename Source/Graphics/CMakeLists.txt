add_library(Graphics STATIC
    Window.cpp
)

# Glad
add_library(glad STATIC 
    ${CMAKE_SOURCE_DIR}/Libraries/glad/src/glad.c
)
target_include_directories(glad
    PUBLIC ${CMAKE_SOURCE_DIR}/Libraries/glad/include
)

# GLFW
find_package(glfw3 REQUIRED)

target_link_libraries(Graphics
    glfw
    glad
)
