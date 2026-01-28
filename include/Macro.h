#pragma once

#ifdef _WIN32
#define CROSSPLATFORM_MOCKS_EXPORT extern "C" __declspec(dllexport)
#define CROSSPLATFORM_MOCKS_IMPORT extern "C" __declspec(dllimport)
#else
#define CROSSPLATFORM_MOCKS_EXPORT extern "C" __attribute__((visibility("default")))
#define CROSSPLATFORM_MOCKS_IMPORT
#endif
