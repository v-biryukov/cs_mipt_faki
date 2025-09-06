#include <iostream>

int cube(int x)
{
    #ifdef CAT
        std::cout << "CAT in cube" << std::endl;
    #endif

    return x * x * x;
}