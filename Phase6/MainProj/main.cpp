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
    std::cout << u8"--- フェーズ6（おまけ）: IID 指定でオブジェクトを取得 ---" << std::endl;

    int exitCode = 0;
    IHello* pHello = nullptr;
    if (!CreateHello(__uuidof(IHello), &pHello))
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
