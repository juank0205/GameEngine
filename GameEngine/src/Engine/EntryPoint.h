#pragma once
#include <iostream>

#ifdef GE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

void main(int argc, char** argv)
{
	auto app = Engine::CreateApplication();
	std::cout << "Game Engine";
	app->Run();
	delete app;
}
#endif
