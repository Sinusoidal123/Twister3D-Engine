#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>

GLFWwindow* makeWindow(const int width, const int height, const char* title) {
  glfwInit();
  
  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  GLFWwindow* window = glfwCreateWindow(width, height, title, nullptr, nullptr);
  
  return window;
}
