/*
    Компиляция:

        gcc -O3 main.c cat.c
*/


#include <stdio.h>

inline int func()
{
    return 10;
}

int cat();

int main()
{
    printf("%i\n", func());
    printf("%i\n", cat());
}