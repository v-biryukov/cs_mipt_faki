#include <stdexcept>

int factorial(int n) 
{
    if (n < 0)
        throw std::invalid_argument("Not defined for negative numbers");

    if (n > 12)
        throw std::invalid_argument("Not defined for n > 12");

    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}