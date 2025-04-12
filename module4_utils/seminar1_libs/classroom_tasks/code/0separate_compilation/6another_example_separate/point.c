#include <math.h>
#include "point.h"

float distance(Point a, Point b)
{
    Point c = {a.x - b.x, a.y - b.y};
    return sqrt(c.x * c.x + c.y * c.y);
}