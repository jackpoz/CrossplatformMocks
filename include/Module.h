#pragma once

#ifdef _WIN32
#include <Windows.h>
typedef HMODULE LibraryHandle;
#else
#include <dlfcn.h>
typedef void* LibraryHandle;
typedef int64_t __time64_t;
#endif
