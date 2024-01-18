#ifndef GLFW_INIT_H
#define GLFW_INIT_H

#include <GLFW/glfw3.h>

void error_callback(int error, const char* description)
GLFWwindow* initWindow(int width, int height, const char* title);
void terminateGLFW();

#endif // GLFW_INIT_H