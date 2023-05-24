#pragma once

#define ENTRYAPP(x) IApplication* EntryApplication() { return new (x); }

class DX12ENGINE_API IApplication
{

public:
	IApplication();
	virtual ~IApplication() = 0;


	virtual void Initialize() = 0;
	virtual void Update() = 0;
};

IApplication* EntryApplication();