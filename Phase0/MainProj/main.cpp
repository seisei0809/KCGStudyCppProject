#include "Utf8Console.h"
#include <iostream>
#include <cstdlib>

static inline void WaitForKey()
{
    system("pause");
}

int main()
{
    SetupUtf8Console();
    std::cout << u8"=== KCG 学習: ライブラリ ===" << std::endl;
    WaitForKey();
    return 0;
}
