#pragma once
// UTF-8 文字列 (u8"...") を std::cout でそのまま使えるようにする
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

inline std::ostream& operator<<(std::ostream& os, const char8_t* text)
{
    return os << reinterpret_cast<const char*>(text);
}

inline void SetupUtf8Console()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
}
