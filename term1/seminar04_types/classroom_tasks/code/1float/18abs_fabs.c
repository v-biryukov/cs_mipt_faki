/*
    Функции для нахождения модуля числа

    В стандартной библиотеки языка C есть несколько функцию для вычисления модуля числа,
    которые отличаются друг от друга тем, что работают с разными типами данных:

        Функция abs   из библиотеки stdlib.h работает с числами типа int
        Функция fabs  из библиотеки math.h   работает с числами типа double
        Функция fabsf из библиотеки math.h   работает с числами типа float


    Если ошибиться и передать, например, число типа double в функцию abs, то она вернёт не то, что вы хотите.
    Такой вызов:

        abs(-2.6) 

    вернёт число 2. Так как число -2.6 будет неявно приведено к типу int при передачу в функцию abs и будет превращено в число -2.

    Чтобы избегать таких ошибок можно компилировать так:

        gcc -Wconversion 18abs_fabs.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    // Правильно:
    printf("%i\n",  abs(-6));
    printf("%lf\n", fabs(-2.6));


    // Неправильно:
    printf("%lf\n", abs(-2.6));
    printf("%i\n",  abs(-2.6));
}