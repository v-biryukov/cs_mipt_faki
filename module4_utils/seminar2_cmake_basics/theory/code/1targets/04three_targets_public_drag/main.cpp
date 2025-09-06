#include <iostream>
#include "volume.hpp"
#include "cube.hpp"

int main()
{
    std::cout << "Volume of ball (r = 1.5): " << getBallVolume(1.5) << std::endl;
    std::cout << "Cube of 5: " << cube(5) << std::endl;
}