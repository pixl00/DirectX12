#pragma once

#include "Platform/WIN32/IApplication.h"

class Application : public IApplication
{

public:
	Application();
	~Application(); // dont override


	void Initialize() override;
	void Update() override;
};