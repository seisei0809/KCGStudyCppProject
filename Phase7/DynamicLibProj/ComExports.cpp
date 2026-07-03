#include "pch.h"
#include "HelloApi.h"
#include "HelloCom.h"

HRESULT STDAPICALLTYPE CreateHello(REFIID riid, void** ppHello)
{
    if (ppHello == nullptr)
    {
        return E_POINTER;
    }
    HelloCom* pObj = new HelloCom();
    HRESULT hr = pObj->QueryInterface(riid, ppHello);
    pObj->Release();
    return hr;
}
