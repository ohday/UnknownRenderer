//Test main

#include <iostream>
using namespace std;

#include "Core/Platform/Windows/d3dApp.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance,
	PSTR cmdLine, int showCmd)
{
	// Enable run-time memory check for debug builds.
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

		D3DApp theApp(hInstance);
		if (!theApp.Initialize())
			return 0;

		return theApp.Run();
	
}

