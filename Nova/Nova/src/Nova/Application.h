#pragma once

#include "Core.h"
#include "../Platform/window.h"
#include "Renderer/Buffer.h"

namespace Nova
{
	class NOVA_API Application
	{
	private:
		Nova::Window m_window;
		Nova::Buffer m_buffer;

	public:
		Application();
		~Application();
		void Run();
	};

	Application* CreateApplication();
}