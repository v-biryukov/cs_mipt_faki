#include <math.h>
#include "point.h"

float triangle_area(Point a, Point b, Point c)
{
    float sa = distance(b, c);
    float sb = distance(c, a);
    float sc = distance(a, b);
    float p = (sa + sb + sc) / 2.0f;
    return sqrt(p * (p - sa) * (p - sb) * (p - sc));
}