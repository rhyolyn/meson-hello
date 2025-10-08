#pragma once

#include "common/meson_hello_api.h"

class MESON_HELLO_API HelloAdapter
{
public:
    HelloAdapter() = default;
    virtual ~HelloAdapter() = default;
    virtual void say_hello() = 0;
};