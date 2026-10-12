#pragma once

#include "Core.h"

namespace Nova
{
	class NOVA_API Application
	{
	public:
		void Run();
	};

	Application* CreateApplication();
}