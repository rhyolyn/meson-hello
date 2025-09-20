#include <iostream>
#include "salutations.h"

extern "C" 
{
    __declspec(dllexport) void salutations() 
    {
        std::cout << __func__ << ": Salutations" << std::endl;
    }

    __declspec(dllexport) void regards()
    {
        std::cout << __func__ << ": Regards" << std::endl;
    }
}