#include "hello.h"
#include <iostream>

extern "C" 
{
    __declspec(dllexport) void hello_world() 
    {
        std::cout << "Hi" << std::endl;
    }
}