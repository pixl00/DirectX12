#pragma once


class DX12ENGINE_API Logger // : public Singleton<Logger>
{
	//friend class Singleton;
	~Logger() {};

public:
	Logger() {};
	void PrintLog(/* const WCHAR* fmt, ...*/ );

	
};

