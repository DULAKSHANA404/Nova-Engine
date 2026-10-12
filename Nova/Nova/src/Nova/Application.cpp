#include "Application.h"

#include <iostream>

namespace Nova
{
	void Application::Run()
	{
		while (!m_window.IsWindowOpen())
		{
			m_window.OnUpdate();
		}
	}

	Application::Application()
	{
		std::cout << "Nova started..." << "\n";
		m_window.WindowInit();
		std::cout << "Nova window initized.." << "\n";
	}
	Application::~Application(){}
}