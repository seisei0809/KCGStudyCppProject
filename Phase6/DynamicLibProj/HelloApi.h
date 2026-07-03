#pragma once
#include <guiddef.h>
#include "IHello.h"

#ifdef DYNAMICLIBPROJ_EXPORTS
#define DYNAMIC_API __declspec(dllexport)
#else
#define DYNAMIC_API __declspec(dllimport)
#endif

extern "C" DYNAMIC_API bool CreateHello(REFIID riid, IHello** ppHello);
