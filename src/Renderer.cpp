#include "Renderer.h"
#include "InputHandler.h"

void renderLoop(GLFWwindow* window) {
    while (!glfwWindowShouldClose(window)) {
        // Input processing (currently only closes window on ESC press)
        processInput(window);

        // Render commands
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap buffers and poll IO events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}