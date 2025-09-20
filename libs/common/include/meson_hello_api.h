#pragma once

#if defined _WIN32 || defined __CYGWIN__

#ifdef MESON_HELLO_DLL_EXPORTS
#define MESON_HELLO_API __declspec(dllexport)
#else
#define MESON_HELLO_API __declspec(dllimport)
#endif

#else // !_WIN32

#ifdef MESON_HELLO_DLL_EXPORTS
#define MESON_HELLO_API __attribute__((visibility("default")))
#else
#define MESON_HELLO_API
#endif

#endif // _WIN32