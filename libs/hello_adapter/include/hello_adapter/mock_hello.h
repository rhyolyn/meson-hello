#pragma once
#include "common/meson_hello_api.h"
#include "hello_adapter/hello_adapter.h"

class MESON_HELLO_API MockHello : public HelloAdapter {
public:
    MockHello();
    virtual ~MockHello();
    void say_hello() override;
};