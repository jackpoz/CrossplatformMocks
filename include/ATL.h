#pragma once

#ifdef _WIN32
#include <atlbase.h>
#else
template<class T>
class CComPtr {
public:
	CComPtr() {
	}
};
#endif
