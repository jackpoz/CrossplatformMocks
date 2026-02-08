#pragma once

#ifndef _WIN32
#include "Typedef.h"
#include <cstdio>
#include <cerrno>

inline errno_t fopen_s(FILE** file, char const* fileName, char const* mode)
{
    if (file == nullptr || fileName == nullptr || mode == nullptr)
    {
        return EINVAL;
    }
    
    *file = fopen(fileName, mode);
    if (*file == nullptr)
    {
        return errno;
    }
    
    return 0;
}
#endif
