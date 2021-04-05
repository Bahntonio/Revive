#pragma once

#ifdef RV_PLATFORM_WINDOWS
	#ifdef RV_BUILD_DLL
		#define REVIVE_API __declspec(dllexport)
	#else 
		#define REVIVE_API __declspec(dllimport)
	#endif
#else
	#error Revive only supports Windows!
#endif