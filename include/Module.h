#pragma once

#ifdef _WIN32
#include <Windows.h>
typedef HMODULE LibraryHandle;
#else
#include <dlfcn.h>
#include "Typedef.h"
#endif
