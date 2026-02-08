#pragma once

#ifdef _WIN32
#include <Windows.h>
#else
#include "Typedef.h"
#define SW_SHOW 5
inline INT_PTR ShellExecuteA(HWND hwnd, LPCSTR operation, LPCSTR file, LPCSTR parameters, LPCSTR directory, INT showCmd) { return 0; }
#endif
