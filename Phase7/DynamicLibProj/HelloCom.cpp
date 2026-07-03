#include "pch.h"
#include "Utf8Console.h"
#include "HelloCom.h"
#include <iostream>

HelloCom::HelloCom() : m_cRef(1) {}

STDMETHODIMP HelloCom::QueryInterface(REFIID riid, void** ppv)
{
    if (ppv == nullptr)
        return E_POINTER;
    if (IsEqualIID(riid, __uuidof(IUnknown)) || IsEqualIID(riid, __uuidof(IHello)))
    {
        *ppv = static_cast<IHello*>(this);
        AddRef();
        return S_OK;
    }
    *ppv = nullptr;
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) HelloCom::AddRef()
{
    return static_cast<ULONG>(InterlockedIncrement(&m_cRef));
}

STDMETHODIMP_(ULONG) HelloCom::Release()
{
    const LONG count = InterlockedDecrement(&m_cRef);
    if (count == 0)
        delete this;
    return static_cast<ULONG>(count);
}

STDMETHODIMP HelloCom::SayHello()
{
    std::cout << u8"[COM] こんにちは、COMオブジェクトから出力しています。" << std::endl;
    return S_OK;
}
