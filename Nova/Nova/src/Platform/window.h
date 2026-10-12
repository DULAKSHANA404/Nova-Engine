#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Nova
{
	class Window
	{
	public:
		Window() = default;
		void WindowInit();
		bool IsWindowOpen();
		void OnUpdate();


	private:
		GLFWwindow* m_window = nullptr;
	};
}