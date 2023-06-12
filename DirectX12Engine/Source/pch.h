#pragma once
#include <d3d12sdklayers.h>
#include <d3dx12.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "dxcompiler.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "shlwapi.lib")

extern "C" { inline __declspec(dllexport) extern const UINT D3D12SDKVersion = 610; }

extern "C" { inline __declspec(dllexport) extern const char* D3D12SDKPath = ".\\D3D12\\"; }

#include "CommandQueue.h"
#include "Definitions.h"
#include "Engine.h"
#include "Game.h"
#include "Tutorial2.h"
#include "UploadBuffer.h"

#include <Application.h>
#include <CommandQueue.h>
#include <d3dcompiler.h>
#include <dxgidebug.h>
#include <Helpers.h>
#include <Shlwapi.h>
#include <shellapi.h>
#include <Window.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>


// Can interfer with std::min/max
#if defined(min)
#undef min
#endif
#if defined(max)
#undef max
#endif

// For defining a function called CreateWindow
#if defined(CreateWindow)
#undef CreateWindow
#endif

// ComPtr
#include <wrl.h>

// DirectX 12 specific headers.
#include <d3d12.h>
#include <dxgi1_6.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>

// STL Headers
#include <algorithm>
#include <cassert>
#include <chrono>

inline COMPTR<IDXGISwapChain4> SwapChain;