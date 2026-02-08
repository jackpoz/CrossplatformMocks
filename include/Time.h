#pragma once

#ifndef _WIN32
#include <ctime>
#include <cerrno>
inline errno_t localtime_s(struct tm* const tm, time_t const* const time)
{
    if (tm == nullptr || time == nullptr)
    {
        return EINVAL;
    }
    
    struct tm* result = localtime_r(time, tm);
    if (result == nullptr)
    {
        return errno;
    }
    
    return 0;
}
#endif
