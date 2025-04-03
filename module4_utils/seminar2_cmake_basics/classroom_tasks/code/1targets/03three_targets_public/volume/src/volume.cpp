#include "cube.hpp"
#include <numbers>

float getCubeVolume(float side)
{
    return cube(side);
}

float getBallVolume(float radius)
{
    return 4.f / 3.f * std::numbers::pi * cube(radius);
}