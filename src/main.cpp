#include <iostream>
#include <glad/glad.h>
#include "GLFWInit.h"
#include "Renderer.h"

int main(int argc, char *argv[]) {
    std::cout << "[i] DEBUG: main entrypoint" << std::endl;

    GLFWwindow* window = initWindow(800, 600, "LearnOpenGL");
    if (!window) {
        return -1;
    }

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "[!] Failed to initialize GLAD" << std::endl;
        terminateGLFW();
        return -1;
    }    

    glViewport(0, 0, 800, 600);

    renderLoop(window);

    terminateGLFW();

    std::cout << "[i] DEBUG: Exiting with 0" << std::endl;
    return 0;
}