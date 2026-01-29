#pragma once

#ifdef _WIN32
#include <Windows.h>
#else
#define CP_UTF8 65001
#define MAPVK_VSC_TO_VK_EX 3
#include "Typedef.h"
UINT MapVirtualKeyExW(UINT uCode, UINT uMapType, HKL dwhkl) { return 0; }
int ToUnicodeEx(UINT wVirtKey, UINT wScanCode, const byte* lpKeyState, LPWSTR pwszBuff, int cchBuff, UINT wFlags, HKL dwhkl) { return 0; }
int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar) { return 0; }
#endif
