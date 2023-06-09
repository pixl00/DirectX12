#pragma once
#include <d3dx12.h>
#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "shlwapi.lib")

#include "Engine.h"
#include "CommandQueue.h"
#include "Game.h"
#include "Tutorial2.h"

#include <d3dcompiler.h>
#include <Application.h>
#include <CommandQueue.h>
#include <Helpers.h>
#include <Window.h>
#include <Shlwapi.h>
#include <dxgidebug.h>

// Minimizes the amount of includes in Windows.h
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

// For parsing commandline arguments
#include <shellapi.h>

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

// Shorthand for ComPtr
#if !defined(COMPTR)
#define COMPTR Microsoft::WRL::ComPtr
#endif 


// ComPtr
#include <wrl.h>

// DirectX 12 specific headers.
#include <d3d12.h>
#include <dxgi1_6.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>

// D3D12 extension library.
//#include <DirectXExtention/d3dx12.h>

// STL Headers
#include <algorithm>
#include <cassert>
#include <chrono>

inline COMPTR<IDXGISwapChain4> SwapChain;