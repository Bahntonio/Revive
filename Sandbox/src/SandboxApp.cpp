#include <Revive.h>

class Sandbox : public Revive::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Revive::Application* Revive::CreateApplication()
{
	return new Sandbox();
}