#include "../include/renderer.hpp"

void framebuffer_size_callback(GLFWwindow* window, const int width, const int height)
{
    glViewport(0, 0, width, height);
}

GLFWwindow* setup_window() {
    if (!glfwInit()) exit(-1);
    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "OpenGL Terrain", nullptr, nullptr);
    if (!window) {
        std::cout << "Fail create GLFW window" << std::endl;
        glfwTerminate();
        exit(-1);
    }
    framebuffer_size_callback(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK) exit(-1);
    glClearColor(0.15f, 0.15f, 0.2f, 1.0f);
    return window;
}

void processInput(GLFWwindow *window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}