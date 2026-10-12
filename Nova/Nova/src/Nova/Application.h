#pragma once

#include "Core.h"

namespace Nova
{
	class NOVA_API Application
	{
	public:
		Application();
		~Application();
		void Run();
	};

	Application* CreateApplication();
}