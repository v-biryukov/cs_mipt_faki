#include <stdio.h>
#include <assert.h>

int divide(int a, int b)
{
    assert(b != 0);
    return a / b;
}

int main()
{
    divide(10, 0);
}