#include <iostream>
#include "greetings.h"
#include "salutations.h"

int main(void)
{
    std::cout << __func__ << ": Hi" << std::endl;
    greetings();
    salutations();
    regards();
    return 0;
}