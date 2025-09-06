#include <stdio.h>
#include "point.h"
#include "area.h"

int main()
{
    Point a = {0, 0};
    Point b = {10, 20};
    Point c = {20, 5};
    printf("%f\n", triangle_area(a, b, c));
}