#pragma once

#include <memory>
#include "common/meson_hello_api.h"
#include "hello_adapter/hello_adapter.h"
#ifdef MOCK_HELLO
#include "hello_adapter/mock_hello.h"
#else
#include "hello_adapter/real_hello_wrapper.h"
#endif

class MESON_HELLO_API HelloAdapterFactory {
public:
    static HelloAdapterFactory& instance();

    std::unique_ptr<HelloAdapter> create_adapter();

private:
    HelloAdapterFactory();
    ~HelloAdapterFactory();
    HelloAdapterFactory(const HelloAdapterFactory&) = delete;
    HelloAdapterFactory& operator=(const HelloAdapterFactory&) = delete;
};