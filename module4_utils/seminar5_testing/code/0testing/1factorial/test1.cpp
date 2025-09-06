#include <iostream>
#include <cassert>
#include "factorial.hpp"


int main()
{
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(-2) == 2);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);

    std::cout << "Test passed" << std::endl;
}