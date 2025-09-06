/*
    Компиляция:

        gcc -O3 main.c cat.c
*/

#include <stdio.h>
#include "cat.h"

int main()
{
    printf("%i\n", func());
    printf("%i\n", cat());
}