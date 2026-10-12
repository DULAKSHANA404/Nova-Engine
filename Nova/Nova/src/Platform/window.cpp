#include "window.h"

namespace Nova
{
	void Window::WindowInit()
	{
		glfwInit();
		m_window = glfwCreateWindow(800, 600, "Nova", 0, 0);
		glfwMakeContextCurrent(m_window);
	}

	bool Window::IsWindowOpen()
	{
		return glfwWindowShouldClose(m_window);
	}

	void Window::Show()
	{
		glfwPollEvents();
		glfwSwapBuffers(m_window);
	}
}