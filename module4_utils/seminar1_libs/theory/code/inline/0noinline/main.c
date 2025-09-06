/*
    Компиляция:

        gcc -O3 main.c cat.c

    Будет ошибка: multiple definition of `func'
*/

#include <stdio.h>

int func()
{
    return 10;
}

int cat();

int main()
{
    printf("%i\n", func());
    printf("%i\n", cat());
}