#pragma once

// Some types are copied from https://github.com/reactos/reactos
#ifndef _WIN32
#include <cstdint>
typedef unsigned char byte;
typedef int INT;
typedef unsigned int UINT;
typedef int64_t __time64_t;
typedef void* LibraryHandle;
typedef void* HKL;
typedef void* HWND;
typedef char* LPSTR;
typedef const char* LPCSTR, LPCCH;
typedef wchar_t* LPWSTR;
typedef const wchar_t* LPCWCH;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef bool* LPBOOL;
typedef uint64_t UINT_PTR;
typedef UINT_PTR WPARAM;
typedef int64_t INT_PTR, LONG_PTR, *PLONG_PTR;
typedef LONG_PTR LPARAM;
typedef uint64_t ULONG_PTR, *PULONG_PTR;
typedef int errno_t;
#endif
