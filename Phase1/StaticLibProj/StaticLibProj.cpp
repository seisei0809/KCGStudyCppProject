#include "pch.h"
#include "Utf8Console.h"
#include "StaticLibApi.h"
#include <iostream>

void PrintHelloFromStaticLib()
{
    std::cout << u8"[静的ライブラリ] こんにちは、静的ライブラリから出力しています。" << std::endl;
}
