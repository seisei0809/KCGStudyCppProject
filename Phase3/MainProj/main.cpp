#include "Utf8Console.h"
#include <iostream>
#include <cstdlib>
#include "DynamicLibApi.h"

static void WaitForKey()
{
    system("pause");
}

int main()
{
    std::cout << u8"--- フェーズ3: 動的ライブラリ＋手動リンク ---" << std::endl;
    PrintHelloFromDynamicLib();
    WaitForKey();
    return 0;
}
