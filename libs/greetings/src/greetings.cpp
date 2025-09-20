#include <iostream>
#include "greetings.h"
#include "salutations.h"

extern "C"
{
    __declspec(dllexport) void greetings()
    {
        std::cout << __func__ << ": Greetings" << std::endl;
        salutations();
    }
}