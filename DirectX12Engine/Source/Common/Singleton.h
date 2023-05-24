#pragma once

template< typename T >
class DX12ENGINE_API Singleton
{
	Singleton();
public:
	Singleton( const Singleton& ) = delete;
	Singleton& operator=( const Singleton& ) = delete;
	Singleton( Singleton&& ) = delete;
	Singleton& operator=( Singleton&& ) = delete;

	static T& instance()
	{
		static Singleton singleton;
		return (T&)singleton;
	}
};