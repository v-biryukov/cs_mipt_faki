/*
    Данный пример содержит ошибку - неопределённое поведение, так как в функции funcb печатается 
    неинициализированная строка. Поэтому данная программа может напечатать всё что угодно.

    Но есть высокая вероятность, что если скомпилировать эту программу без оптимизаций и запустить, 
    то на экран напечатается:

        Cats and dogs!

    Почему это происходит?
*/

#include <stdio.h>

void funca()
{
    char a[16] = "Cats and dogs!";
}

void funcb()
{
    char b[16];
    printf("%s\n", b);
}

int main()
{
    funca();
    funcb();
}