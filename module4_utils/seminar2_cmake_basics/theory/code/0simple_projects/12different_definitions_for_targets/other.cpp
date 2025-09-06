#include <iostream>
#include "other.hpp"

void func()
{
#ifdef CAT
    std::cout << "In other it's a cat" << std::endl;
#endif

#if DOG
    std::cout << "In other it's a dog" << std::endl;
#endif
}