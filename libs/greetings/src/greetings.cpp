#include <iostream>

#include "common/meson_hello_api.h"
#include "greetings/greetings.h"
#include "salutations/salutations.h"

extern "C"
{
    MESON_HELLO_API void greetings()
    {
        std::cout << __func__ << ": Greetings" << std::endl;
        salutations();
    }
}