#include <iostream>
#include "greetings/greetings.h"
#include "salutations/salutations.h"
#include "hello_adapter/hello_adapter_factory.h"

int main(void)
{
    std::cout << __func__ << ": Hi" << std::endl;
    greetings();
    salutations();
    regards();

    auto adapter = HelloAdapterFactory::instance().create_adapter();
    adapter->say_hello();

    return 0;
}