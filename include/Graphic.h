#pragma once

#ifdef _WIN32
#include <d3d11.h>
typedef ID3D11Device GraphicDevice;
typedef ID3D11ShaderResourceView ShaderResourceView;
#else
struct GraphicDevice
{
};

struct ShaderResourceView
{
};
#endif
