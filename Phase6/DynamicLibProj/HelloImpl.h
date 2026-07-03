#pragma once
#include "IHello.h"

class HelloImpl : public IHello
{
public:
    void SayHello() override;
    void Release() override;
};
