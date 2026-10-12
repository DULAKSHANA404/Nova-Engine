#pragma once

#include "Core.h"
#include "../Platform/window.h"
#include "Renderer/Buffer.h"
#include "Renderer/Shader.h"

namespace Nova
{
	class NOVA_API Application
	{
	private:
		Nova::Window m_window;
		Nova::Buffer m_buffer;
		Nova::Shaders m_shader;

	public:
		Application();
		~Application();
		void Run();
	};

	Application* CreateApplication();
}