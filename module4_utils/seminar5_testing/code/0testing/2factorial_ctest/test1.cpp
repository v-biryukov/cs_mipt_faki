#include <iostream>
#include <cassert>
#include "factorial.hpp"


int main()
{
    bool result = true
        && (factorial(0) == 1)
        && (factorial(1) == 1)
        && (factorial(2) == 3)
        && (factorial(5) == 120)
        && (factorial(10) == 3628800);

    if (result)
    {
        std::cout << "Test passed" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Test failed" << std::endl;
        return 1;
    }

}