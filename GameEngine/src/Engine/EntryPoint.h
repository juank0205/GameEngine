#pragma once
#include <iostream>

#ifdef GE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

void main(int argc, char** argv)
{

	Engine::Log::Init();
	GE_CORE_WARN("Initialized Log!");
	GE_CLIENT_INFO("Logging");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif
