#pragma once
#include "Application.h"


int main()
{
	auto app = Nova::CreateApplication();
	app->Run();
	delete app;
}