// MainProj: フェーズ4 — LoadLibrary / GetProcAddress で DLL を実行時ロード
#include "Utf8Console.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>

using PrintHelloFromDynamicLibFn = void(*)();

static void WaitForKey()
{
    system("pause");
}

int main()
{
    SetupUtf8Console();
    std::cout << u8"--- フェーズ4: 動的ライブラリを直接ロード ---" << std::endl;

    HMODULE dll = LoadLibraryW(L"DynamicLibProj.dll");
    if (dll == nullptr)
    {
        std::cout << u8"[メイン] DLL のロードに失敗しました。" << std::endl;
        WaitForKey();
        return 1;
    }

    auto printHello = reinterpret_cast<PrintHelloFromDynamicLibFn>(
        GetProcAddress(dll, "PrintHelloFromDynamicLib"));
    if (printHello == nullptr)
    {
        std::cout << u8"[メイン] 関数の取得に失敗しました。" << std::endl;
        FreeLibrary(dll);
        WaitForKey();
        return 1;
    }

    printHello();
    FreeLibrary(dll);
    WaitForKey();
    return 0;
}
