//#include "window.cpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "glm/mat2x2.hpp"



#include <iostream>
#include <string>
#include <memory>

#include "Application.hpp"


static int width = 640;
static int height = 480;

class Window
{
private:
    GLFWwindow* window;
public:
    Window() {
        if (this->window != nullptr) {
            window = glfwCreateWindow(640, 480, "Window", NULL, NULL);
        }
        else
            std::cout << "window alreay initilized";
    };
    ~Window();
    void init();
};





glm::mat2x2 fixed{ 1,2,3,4 };


int main()
{

#pragma region window_glfw_glad_init
    GLFWwindow* window;

    if (!glfwInit())
        exit(EXIT_FAILURE);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(640, 480, "Window", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }


    glfwMakeContextCurrent(window);
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    glfwSwapInterval(1);


#pragma endregion
    //init redered objects


    //redering loop

    while (!glfwWindowShouldClose(window))
    {
        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();
    exit(EXIT_SUCCESS);

    return 0;
}
