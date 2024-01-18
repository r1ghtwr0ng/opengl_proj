#include "GLFWInit.h"
#include <iostream>

void error_callback(int error, const char* description) {
    std::cerr << "[!] Error: " << description << std::endl;
}

GLFWwindow* initWindow(int width, int height, const char* title) {
    glfwSetErrorCallback(error_callback);

    if (!glfwInit()) {
        std::cerr << "[!] Failed to initialize GLFW" << std::endl;
        return nullptr;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!window) {
        std::cerr << "[!] Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return nullptr;
    }

    glfwMakeContextCurrent(window);

    return window;
}

void terminateGLFW() {
    glfwTerminate();
}