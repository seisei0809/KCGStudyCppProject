#include "pch.h"
#include "Hello.h"
#include "Utf8Console.h"
#include <iostream>

void Hello::SayHello()
{
    std::cout << u8"[DLLオブジェクト] こんにちは、オブジェクトから出力しています。" << std::endl;
}

void Hello::Release()
{
    delete this;
}
