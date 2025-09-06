#include <iostream>

int main()
{
#ifdef CAT
    std::cout << "It's a cat!" << std::endl;
#else
    std::cout << "No cat!" << std::endl;
#endif
}