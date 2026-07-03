#include "Utf8Console.h"
#include <iostream>
#include <cstdlib>
#include "HelloApi.h"

static void WaitForKey()
{
    system("pause");
}

int main()
{
    std::cout << u8"--- フェーズ5（おまけ）: DLL からオブジェクトを取得 ---" << std::endl;

    int exitCode = 0;
    Hello* pHello = nullptr;
    if (!CreateHello(&pHello))
    {
        std::cout << u8"[メイン] オブジェクトの生成に失敗しました。" << std::endl;
        exitCode = 1;
    }
    else
    {
        pHello->SayHello();
        pHello->Release();
    }

    WaitForKey();
    return exitCode;
}
