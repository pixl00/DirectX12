#pragma once

#ifdef WIN32

#include <Windows.h>

#endif

#ifdef BUILD_DLL
	#define DX12ENGINE_API __declspec(dllexport)
#else
	#define DX12ENGINE_API __declspec(dllimport)
#endif

#include "Common/Logger.h"
//#include "Common/Singleton.h"