#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <GLFW/glfw3.h>
#include "constants.hpp"

void framebuffer_size_callback(GLFWwindow* window, int width=WIDTH, int height=HEIGHT);

GLFWwindow* setup_window();

void processInput(GLFWwindow *window);

#endif //RENDERER_HPP
