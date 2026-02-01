#pragma once

// Some types are copied from https://github.com/reactos/reactos
#ifndef _WIN32
#include <cstdint>
typedef unsigned char byte;
typedef unsigned int UINT;
typedef int64_t __time64_t;
typedef void* LibraryHandle;
typedef void* HKL;
typedef char* LPSTR;
typedef const char* LPCCH;
typedef wchar_t* LPWSTR;
typedef const wchar_t* LPCWCH;
typedef unsigned long DWORD;
typedef bool* LPBOOL;
#endif
