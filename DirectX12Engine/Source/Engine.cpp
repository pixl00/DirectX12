#include "pch.h"

#pragma region Globals
#pragma region Settings

// Number of swap chain back buffers
const unsigned char NumFrames = 3;

bool UseWarp;// = false;

unsigned ClientWidth;// = 1280;
unsigned ClientHeight;// = 720;

// Can be toggled with the V key.
bool VSync = true;
bool TearingSupported = false;
// Can be toggled with the Alt+Enter or F11
bool Fullscreen = false;

#pragma endregion Settings

// Set to true once the DX12 objects have been initialized.
bool IsInitialized = false;

// Window handle
HWND HWindow;
// Window rectangle (used to toggle fullscreen state)
RECT WindowRect;

// DirectX 12 Objects
COMPTR<ID3D12Device2> Device;
COMPTR<ID3D12CommandQueue> CommandQueue;
COMPTR<IDXGISwapChain4> SwapChain;
COMPTR<ID3D12Resource> BackBuffers[NumFrames];
COMPTR<ID3D12GraphicsCommandList> CommandList;
COMPTR<ID3D12CommandAllocator> CommandAllocators[NumFrames];
COMPTR<ID3D12DescriptorHeap> RTVDescriptorHeap;
UINT RTVDescriptorSize;
UINT CurrentBackBufferIndex;

// Synchronization objects
COMPTR<ID3D12Fence> Fence;
uint64_t FenceValue = 0;
uint64_t FrameFenceValues[NumFrames] = {};
HANDLE FenceEvent;

#pragma region Functions

LRESULT CALLBACK WndProc( HWND, UINT, WPARAM, LPARAM );

void ParseCommandLineArguments()
{
    int argc;
    wchar_t** argv = ::CommandLineToArgvW( ::GetCommandLineW(), &argc );

    for( size_t i = 0; i < argc; ++i )
    {
        if( ::wcscmp( argv[i], L"-w" ) == 0 || ::wcscmp( argv[i], L"--width" ) == 0 )
            ClientWidth = ::wcstol( argv[++i], nullptr, 10 );

        if( ::wcscmp( argv[i], L"-h" ) == 0 || ::wcscmp( argv[i], L"--height" ) == 0 )
            ClientHeight = ::wcstol( argv[++i], nullptr, 10 );

        if( ::wcscmp( argv[i], L"-warp" ) == 0 || ::wcscmp( argv[i], L"--warp" ) == 0 )
            UseWarp = true;
    }

    // Free memory allocated by CommandLineToArgvW
    ::LocalFree( argv );
}

inline void ThrowIfFailed( HRESULT hr )
{
    if( FAILED( hr ) )
        throw std::exception();
}

void EnableDebugLayer()
{
#if defined( _DEBUG )
    COMPTR<ID3D12Debug> debugInterface;
    ThrowIfFailed( D3D12GetDebugInterface( IID_PPV_ARGS( &debugInterface ) ));
    debugInterface->EnableDebugLayer();
#endif
}

#pragma endregion Functions

#pragma endregion Globals

