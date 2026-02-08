#pragma once

#ifdef _WIN32
#include <Windows.h>
typedef HMODULE LibraryHandle;
#else
#include <dlfcn.h>
#include "Typedef.h"

DWORD GetLastError()
{
    return -1;
}
#endif

template<typename T>
T LibrariesManager::GetFunctionAddress(LibraryHandle handle, const char* functionName)
{
#ifdef _WIN32
    return reinterpret_cast<T>(::GetProcAddress(handle, functionName));
#else
    return reinterpret_cast<T>(dlsym(handle, functionName));
#endif
}
