#pragma once
#include "Application.h"

Nova::Application* Nova::CreateApplication();

int main()
{
	auto app = Nova::CreateApplication();
	app->Run();
	delete app;
}