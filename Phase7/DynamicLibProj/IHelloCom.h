#pragma once
#include <windows.h>
#include <unknwn.h>

struct __declspec(uuid("e7a8f901-2b3c-4d5e-8f90-1a2b3c4d5e6f")) IHello : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SayHello() = 0;
};
