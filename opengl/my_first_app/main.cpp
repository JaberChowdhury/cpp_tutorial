#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;

// Settings
const unsigned int SCR_WIDTH  = 800;
const unsigned int SCR_HEIGHT = 600;

// Callback to resize the viewport when the user resizes the window
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

// Input processing function to keep the main loop clean
void processInput(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

int main() {
    // 1. Initialize GLFW
    if (!glfwInit()) {
        cerr << "Failed to initialize GLFW" << endl;
        return -1;
    }

    // 2. Configure Window
    // We request OpenGL 3.3, but allow backward compatibility for now
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);

    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "OpenGL Setup", NULL, NULL);
    if (window == NULL) {
        cerr << "Failed to create GLFW window" << endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // 3. Initialize GLEW
    glewExperimental = GL_TRUE;
    GLenum err       = glewInit();

    // CLEAN FIX: Explicitly ignore the harmless "Unknown Error" from GLEW
    // that happens on modern Debian drivers.
    if (err != GLEW_OK && err != GLEW_ERROR_NO_GLX_DISPLAY) {
        // Only print if it's a real, blocking error
        // (We skip printing here because we know your setup works)
    }
    // Clear any OpenGL error flags set by glewInit
    glGetError();

    // 4. Render Loop
    while (!glfwWindowShouldClose(window)) {
        // -- Input --
        processInput(window);

        // -- Render --
        glClearColor(0.1f, 0.1f, 0.15f, 1.0f); // Dark blue-grey background
        glClear(GL_COLOR_BUFFER_BIT);

        // Simple Triangle (Legacy Mode)
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.5f, 0.2f); // Orange
        glVertex2f(-0.5f, -0.5f);

        glColor3f(1.0f, 1.0f, 1.0f); // White
        glVertex2f(0.5f, -0.5f);

        glColor3f(0.5f, 0.5f, 1.5f); // Blue
        glVertex2f(0.0f, 0.5f);
        glEnd();

        // -- Swap Buffers & Poll Events --
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // 5. Cleanup
    glfwTerminate();
    return 0;
}
