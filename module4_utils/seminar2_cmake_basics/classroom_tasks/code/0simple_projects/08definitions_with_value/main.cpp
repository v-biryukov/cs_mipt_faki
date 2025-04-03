#include <iostream>

int main()
{
#ifdef CAT
    std::cout << "CAT = " << CAT << std::endl;
#else
    std::cout << "No cat!" << std::endl;
#endif
}