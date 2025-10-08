#include "hello_adapter/mock_hello.h"
#include <iostream>

MockHello::MockHello() = default;
MockHello::~MockHello() = default;

void MockHello::say_hello() {
    std::cout << "Hello from MockHello!" << std::endl;
}