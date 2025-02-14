#ifndef GRAPHICS_WINDOW_HPP
#define GRAPHICS_WINDOW_HPP

#define GLFW_INCLUDE_NONE
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window {
public:
    void Init();
    void Kill();
    void Loop();

    struct { int x, y; } size;
    GLFWwindow* handle;
};

#endif
