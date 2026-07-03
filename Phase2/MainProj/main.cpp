#include "Utf8Console.h"
#include <iostream>
#include <cstdlib>
#include "DynamicLibApi.h"

static inline void WaitForKey()
{
    system("pause");
}

int main()
{
    std::cout << u8"--- フェーズ2: 動的ライブラリ ---" << std::endl;
    PrintHelloFromDynamicLib();
    WaitForKey();
    return 0;
}
