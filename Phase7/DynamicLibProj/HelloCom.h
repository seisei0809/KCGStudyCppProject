#pragma once
#include "IHelloCom.h"

class HelloCom : public IHello
{
public:
    HelloCom();
    STDMETHODIMP QueryInterface(REFIID riid, void** ppv) override;
    STDMETHODIMP_(ULONG) AddRef() override;
    STDMETHODIMP_(ULONG) Release() override;
    STDMETHODIMP SayHello() override;
private:
    long m_cRef;
};