#pragma once

#include <GLFW/glfw3.h>

namespace Nova
{
	class Window
	{
	public:
		void WindowInit();
		bool IsWindowOpen();
		void OnUpdate();


	private:
		GLFWwindow* m_window = nullptr;
	};
}