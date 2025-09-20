#include <iostream>

#include "meson_hello_api.h"
#include "salutations.h"

extern "C" 
{
    MESON_HELLO_API void salutations()
    {
        std::cout << __func__ << ": Salutations" << std::endl;
    }

    MESON_HELLO_API void regards()
    {
        std::cout << __func__ << ": Regards" << std::endl;
    }
}