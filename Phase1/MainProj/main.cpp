#include "Utf8Console.h"
#include <iostream>
#include <cstdlib>
#include "StaticLibApi.h"

static inline void WaitForKey()
{
    system("pause");
}

int main()
{
    SetupUtf8Console();
    std::cout << u8"--- フェーズ1: 静的ライブラリ ---" << std::endl;
    PrintHelloFromStaticLib();
    WaitForKey();
    return 0;
}
