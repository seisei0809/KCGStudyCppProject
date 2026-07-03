#include "pch.h"
#include "Utf8Console.h"
#include "DynamicLibApi.h"
#include <iostream>

extern "C" DYNAMIC_API void PrintHelloFromDynamicLib()
{
    std::cout << u8"[動的ライブラリ] こんにちは、DLLから出力しています。" << std::endl;
}
