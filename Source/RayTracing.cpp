#include "Graphics/Window.hpp"
#include "Thread/ThreadPool.hpp"
#include <cstdarg>
#include <iostream>

Window window;

int main() {
    window.Init();

    while (!glfwWindowShouldClose(window.handle)) {
        glfwPollEvents();

        glClearColor(0.580f, 0.800f, 0.976f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glfwSwapBuffers(window.handle);
    }

    window.Kill();
}
