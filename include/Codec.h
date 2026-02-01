#pragma once

#ifdef _WIN32
#include <wincodec.h>
#else
enum DXGI_FORMAT
{
    DXGI_FORMAT_UNKNOWN = 0,
};

struct GUID
{
};

struct IWICBitmapFrameDecode
{
};

struct IWICImagingFactory
{
};

typedef GUID WICPixelFormatGUID;
#endif
