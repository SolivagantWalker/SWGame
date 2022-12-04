#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>

#define WINDOWHEIGHT 600
#define WINDOWWIDTH 800

class Window 
{
	GLFWwindow* ptr;
public:
	Window();
	~Window();
	void init();
};


Window::Window() :ptr(glfwCreateWindow(640, 480, "Window", NULL, NULL)) {};

