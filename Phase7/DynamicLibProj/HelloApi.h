#pragma once
#include <unknwn.h>
#include "IHelloCom.h"

#ifdef DYNAMICLIBPROJ_EXPORTS
#define DYNAMIC_API __declspec(dllexport)
#else
#define DYNAMIC_API __declspec(dllimport)
#endif

extern "C" HRESULT STDAPICALLTYPE CreateHello(REFIID riid, void** ppHello);
