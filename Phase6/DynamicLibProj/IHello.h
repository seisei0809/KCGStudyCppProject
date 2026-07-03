// IHello.h: GUID 付きインターフェース（Phase5 の Hello を抽象化した契約）
#pragma once
#include <guiddef.h>

struct __declspec(uuid("e7a8f901-2b3c-4d5e-8f90-1a2b3c4d5e6f")) IHello
{
    virtual void SayHello() = 0;
    virtual void Release() = 0;
};
