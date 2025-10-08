#include "hello_adapter/hello_adapter_factory.h"

HelloAdapterFactory& HelloAdapterFactory::instance() {
    static HelloAdapterFactory factory_instance;
    return factory_instance;
}

std::unique_ptr<HelloAdapter> HelloAdapterFactory::create_adapter() {
#ifdef MOCK_HELLO
    return std::make_unique<MockHello>();
#else
    return std::make_unique<RealHello>();
#endif
}

HelloAdapterFactory::HelloAdapterFactory() = default;
HelloAdapterFactory::~HelloAdapterFactory() = default;