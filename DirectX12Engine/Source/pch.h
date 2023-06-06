#pragma once

#include "Engine.h"

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


