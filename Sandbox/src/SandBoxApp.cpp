#include "Nova.h"

class Sandbox : public Nova::Application
{
	Nova::Application* Nova::CreateApplication()
	{
		return new Sandbox
	}
};