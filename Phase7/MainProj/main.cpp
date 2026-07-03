#include "Utf8Console.h"
#include <iostream>
#include <windows.h>
#include "HelloApi.h"

static void WaitForKey()
{
    system("pause");
}

int main()
{
    std::cout << u8"--- フェーズ7（おまけ）: COM ---" << std::endl;

    int exitCode = 0;
    HRESULT hr = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
    if (FAILED(hr))
    {
        std::cout << u8"[メイン] COM の初期化に失敗しました。" << std::endl;
        exitCode = 1;
    }
    else
    {
        IHello* pHello = nullptr;
        hr = CreateHello(IID_PPV_ARGS(&pHello));
        if (FAILED(hr))
        {
            std::cout << u8"[メイン] COMオブジェクトの生成に失敗しました。" << std::endl;
            exitCode = 1;
        }
        else
        {
            pHello->SayHello();
            pHello->Release();
        }

        CoUninitialize();
    }

    WaitForKey();
    return exitCode;
}
