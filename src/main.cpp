#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

void error_callback(int error, const char* description) {
    std::cerr << "[!] Error: " << description << std::endl;
}

int main(int argc, char *argv[])
{
    std::cout << "[i] DEBUG: main entrypoint" << std::endl;

    // Set the error callback before initializing GLFW
    glfwSetErrorCallback(error_callback);

    // Initialize GLFW
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create window object
    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cerr << "[!] Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // Initialize GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "[!] Failed to initialize GLAD" << std::endl;
        return -1;
    }    

    glViewport(0, 0, 800, 600);

    // Rendering loop
    while (!glfwWindowShouldClose(window)) {
        // Input handling and rendering commands go here

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}