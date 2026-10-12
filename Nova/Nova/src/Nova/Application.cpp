#include "Application.h"
#include "../Platform/window.h"
#include <iostream>

namespace Nova
{
	void Application::Run()
	{
		std::cout << "Nova started..." << "\n";
		Nova::Window window;
		window.WindowInit();
		std::cout << "Nova window initized.." << "\n";
		while (!window.IsWindowOpen())
		{
			window.Show();
		}

	}

	Application::Application(){}
	Application::~Application(){}
}