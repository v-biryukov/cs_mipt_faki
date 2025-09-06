#include <iostream>

int main()
{
    int a = 0;

    for (int i = 0; i < 2'000'000'000; ++i)
        a += 1;

    std::cout << a << std::endl;
}