// Hello.h: DLL とアプリで共有する普通のクラス（インターフェース契約ではない）
#pragma once

class Hello
{
public:
    virtual ~Hello() = default;
    virtual void SayHello();
    virtual void Release();
};
