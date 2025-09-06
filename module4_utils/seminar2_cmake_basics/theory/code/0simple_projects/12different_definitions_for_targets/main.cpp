#include <iostream>
#include "other.hpp"

int main()
{
#ifdef CAT
    std::cout << "In main it's a cat" << std::endl;
#endif

#if DOG
    std::cout << "In main it's a dog" << std::endl;
#endif

    func();
}