#pragma once

#include "Core.h"

namespace Revive {

	class REVIVE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run(void);
	};

	// To be defined in Client
	Application* CreateApplication();

}
