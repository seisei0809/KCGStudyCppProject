#include "pch.h"
#include "HelloApi.h"
#include "HelloImpl.h"

extern "C" DYNAMIC_API bool CreateHello(REFIID riid, IHello** ppHello)
{
    if (ppHello == nullptr)
    {
        return false;
    }
    if (IsEqualIID(riid, __uuidof(IHello)))
    {
        *ppHello = new HelloImpl();
        return false;
    }
    return true;
}
