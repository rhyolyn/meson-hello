#include "hello_adapter/real_hello_wrapper.h"
#include <iostream>

RealHello::RealHello() = default;
RealHello::~RealHello() = default;

void RealHello::say_hello() {
    std::cout << "Hello from RealHello!" << std::endl;
}