#include <iostream>

#include "meson_hello_api.h"
#include "greetings.h"
#include "salutations.h"

extern "C"
{
    MESON_HELLO_API void greetings()
    {
        std::cout << __func__ << ": Greetings" << std::endl;
        salutations();
    }
}