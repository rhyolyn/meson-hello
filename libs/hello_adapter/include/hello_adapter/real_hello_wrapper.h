#pragma once
#include "common/meson_hello_api.h"
#include "hello_adapter/hello_adapter.h"

class MESON_HELLO_API RealHello : public HelloAdapter {
public:
    RealHello();
    virtual ~RealHello();
    void say_hello() override;
};