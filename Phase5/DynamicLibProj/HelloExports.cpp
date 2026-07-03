#include "pch.h"
#include "HelloApi.h"
#include "Hello.h"

extern "C" DYNAMIC_API bool CreateHello(Hello** ppHello)
{
    if (ppHello == nullptr)
    {
        return false;
    }
    *ppHello = new Hello();
    return true;
}
