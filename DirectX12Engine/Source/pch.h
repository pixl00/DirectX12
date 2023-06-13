#pragma once
#include <d3d12sdklayers.h>
#include "d3dx12.h"
#include <DirectXMath.h>
#include <DirectXTex.h>
#include <d3dcompiler.h>
#include <dxgi1_6.h>
#include <dxgidebug.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "dxcompiler.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "DX12Libd.lib")

//extern "C" { inline __declspec(dllexport) extern const UINT D3D12SDKVersion = 610; }

//extern "C" { inline __declspec(dllexport) extern const char* D3D12SDKPath = ".\\D3D12\\"; }

//#include "CommandQueue.h"
#include "Definitions.h"
//#include "DescriptorAllocation.h"
//#include "DescriptorAllocator.h"
//#include "DescriptorAllocatorPage.h"
//#include "Engine.h"
//#include "Game.h"
//#include "Tutorial2.h"
//#include "UploadBuffer.h"
//#include "CommandQueue.h"


#include <d3dcompiler.h>
#include <dxgidebug.h>
#include <Helpers.h>
#include <Shlwapi.h>
#include <shellapi.h>
#include <Window.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

// STL Headers
#include <algorithm>
#include <atomic>
#include <cassert>
#include <chrono>
#include <condition_variable>
#include <filesystem>
#include <functional>
#include <map>
#include <memory>
#include <mutex>
#include <new>
#include <sstream>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

//// Assimp header files.
#include <assimp/anim.h>
#include <assimp/Exporter.hpp>
#include <assimp/Importer.hpp>
#include <assimp/mesh.h>
#include <assimp/ProgressHandler.hpp>
#include <assimp/postprocess.h>
#include <assimp/scene.h>

// Helper functions
#include <Helpers.h>

inline COMPTR<IDXGISwapChain4> SwapChain;