#pragma once

#include "Core.h"

namespace Engine {

	class GE_API Application
	{
	public:
		Application();
		virtual	~Application();

		int Run();
	};

	Application* CreateApplication();
}

