#include "pch.h"

#pragma region GlobalVariables
WCHAR WindowClass[MAX_NAME_STRING];
WCHAR WindowTitle[MAX_NAME_STRING];

INT WindowWidth;
INT WindowHeight;

HICON hIcon;
#pragma endregion

#pragma region ForwardDeclarations

void InitializeVariables();
void CreateWindowClass();
void InitializeWindow();
void MessageLoop();
LRESULT CALLBACK WindowProcess( HWND hWnd, UINT message, WPARAM wparam, LPARAM lparam );

#pragma endregion
/*
int CALLBACK WinMain( HINSTANCE, HINSTANCE, LPSTR, INT )
{

	InitializeVariables();
	CreateWindowClass();
	InitializeWindow();
	MessageLoop();

	return 0;
}
*/

void InitializeVariables()
{
	LoadString( HInstance(), IDS_PERGAMENAME, WindowTitle, MAX_NAME_STRING );
	LoadString( HInstance(), IDS_WINDOWCLASS, WindowClass, MAX_NAME_STRING );

	WindowWidth = 1366;
	WindowHeight = 768;
	hIcon = LoadIcon( HInstance(), MAKEINTRESOURCE( IDI_MAINICON ) );
}

void CreateWindowClass()
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof( WNDCLASSEX );
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;

	wcex.hCursor = LoadCursor( nullptr, IDC_ARROW );
	wcex.hbrBackground = (HBRUSH)GetStockObject( NULL_BRUSH );

	wcex.hIcon = hIcon;
	wcex.hIconSm = hIcon;

	wcex.lpszClassName = WindowClass;

	wcex.lpszMenuName = nullptr;

	wcex.hInstance = HInstance();

	wcex.lpfnWndProc = WindowProcess;

	RegisterClassEx( &wcex );
}

void InitializeWindow()
{
	HWND hWnd = CreateWindow( WindowClass, WindowTitle, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, WindowWidth, WindowHeight, nullptr, nullptr, HInstance(), nullptr );

	if( !hWnd )
	{
		MessageBox( 0, L"Failed to create window", 0, 0 );
		PostQuitMessage( 0 );
	}

	ShowWindow( hWnd, SW_SHOW );
}

void MessageLoop()
{
	MSG msg = { 0 };
	while( msg.message != WM_QUIT )
	{
		if( PeekMessage( &msg, 0, 0, 0, PM_REMOVE ) )
		{
			TranslateMessage( &msg );
			DispatchMessage( &msg );
		}
	}
}

LRESULT CALLBACK WindowProcess( HWND hWnd, UINT message, WPARAM wparam, LPARAM lparam )
{
	switch( message )
	{
		case WM_DESTROY:
			PostQuitMessage( 0 );
			break;
	}

	return DefWindowProc( hWnd, message, wparam, lparam );
}