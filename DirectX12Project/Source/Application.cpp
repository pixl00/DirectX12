#include "pch.h"
#include "Application.h"
#include "Platform/WIN32/WinEntry.h"

ENTRYAPP( Application );

Application::Application()
{
	
}

Application::~Application()
{
	
}

void Application::Initialize()
{
	//Logger::instance().PrintLog( L"Instantiated");
	Logger* logger = new Logger();
	logger->PrintLog( );
}

void Application::Update()
{
	MessageBox( 0, L"Loop", 0, 0 );
}
