#include <iostream>
#include "greetings/greetings.h"
#include "salutations/salutations.h"

int main(void)
{
    std::cout << __func__ << ": Hi" << std::endl;
    greetings();
    salutations();
    regards();
    return 0;
}