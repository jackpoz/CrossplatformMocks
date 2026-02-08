#pragma once

#ifndef _WIN32
#include "Typedef.h"
#include <cstring>
#include <cerrno>

errno_t strcpy_s(char* destination, size_t sizeInBytes, char const* source)
{
    if (destination == nullptr || source == nullptr || sizeInBytes == 0)
    {
        return EINVAL;
    }
    
    size_t sourceLength = strlen(source);
    if (sourceLength + 1 > sizeInBytes)
    {
        return ERANGE;
    }
    
    strcpy(destination, source);
    
    return 0;
}
#endif
