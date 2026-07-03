#include "pch.h"
#include "HelloImpl.h"
#include "Utf8Console.h"
#include <iostream>

void HelloImpl::SayHello()
{
    std::cout << u8"[DLLオブジェクト] こんにちは、オブジェクトから出力しています。" << std::endl;
}

void HelloImpl::Release()
{
    delete this;
}
