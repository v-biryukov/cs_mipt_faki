#include <iostream>
#include "cube.hpp"

int main()
{
    #ifdef CAT
        std::cout << "CAT in main" << std::endl;
    #endif
    std::cout << cube(5) << std::endl;
}