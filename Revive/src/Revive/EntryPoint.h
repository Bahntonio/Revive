#pragma once

#ifdef RV_PLATFORM_WINDOWS

extern Revive::Application* Revive::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Revive::CreateApplication();
	app->Run();
	delete app;
}

#endif