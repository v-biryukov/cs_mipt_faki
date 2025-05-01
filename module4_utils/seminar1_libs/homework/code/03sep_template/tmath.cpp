#include <iostream>


template<typename T>
T sum(T x, T y)
{
    return x + y;
}

template<typename T>
T mult(T x, T y)
{
    return x * y;
}


int main()
{
    std::cout << sum(10, 5) << std::endl;
    std::cout << sum(0.5, 1.2) << std::endl;    
    std::cout << mult(10, 5) << std::endl;
    std::cout << mult(0.5, 1.2) << std::endl;
}