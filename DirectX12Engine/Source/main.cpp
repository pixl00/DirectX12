#include "pch.h"
#include <dxgidebug.h>
#include <Shlwapi.h>

#include "Application.h"
#include "Tutorial2.h"

void ReportLiveObjects()
{
    IDXGIDebug1* dxgiDebug;
    DXGIGetDebugInterface1( 0, IID_PPV_ARGS( &dxgiDebug ) );

    dxgiDebug->ReportLiveObjects( DXGI_DEBUG_ALL, DXGI_DEBUG_RLO_IGNORE_INTERNAL );
    dxgiDebug->Release();
}
int CALLBACK wWinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR lpCmdLine, int nCmdShow )
{
    // Enable the D3D12 debug layer.
    {
	    COMPTR<ID3D12Debug> debugController;
        if( SUCCEEDED( D3D12GetDebugInterface( IID_PPV_ARGS( &debugController ) ) ) )
        {
            debugController->EnableDebugLayer();
        }
    }

    int retCode = 0;

    // Set the working directory to the path of the executable.
    WCHAR path[MAX_PATH];
    HMODULE hModule = GetModuleHandleW( NULL );
    if( GetModuleFileNameW( hModule, path, MAX_PATH ) > 0 )
    {
        PathRemoveFileSpecW( path );
        SetCurrentDirectoryW( path );
    }
    
    Application::Create( hInstance );
    {
        std::shared_ptr<Tutorial2> demo = std::make_shared<Tutorial2>( L"Learning DirectX 12 - Lesson 2", 1280, 720 );
    	retCode = Application::Get().Run( demo );
    }
    Application::Destroy();

    atexit( &ReportLiveObjects );

    return retCode;
}

