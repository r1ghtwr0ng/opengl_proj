cmake_minimum_required(VERSION 3.28.1)
project(OpenGL_Project)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find necessary packages
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Include directories
include_directories(include)

# Add your source directory
add_executable(opengl_proj src/main.cpp src/glad.c)

# Link the libraries
target_link_libraries(opengl_proj ${OPENGL_gl_LIBRARY} glfw)