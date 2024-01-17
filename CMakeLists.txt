cmake_minimum_required(VERSION 3.28.1)
project(OpenGL_Project)

set(CMAKE_CXX_STANDARD 17) # Set the C++ standard

find_package(OpenGL REQUIRED) # Find the OpenGL package

# Add your source directory
add_executable(opengl_proj src/main.cpp)

target_link_libraries(opengl_proj ${OPENGL_gl_LIBRARY}) # Link the OpenGL library
# Add any additional include directories or libraries here