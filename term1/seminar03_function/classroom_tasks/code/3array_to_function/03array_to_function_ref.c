/*
    В отличии от объектов всех остальных типов, массивы передаются в функции без копирования всего содержимого массива.
    Вместо этого функция работает с оригинальным массивом.
    Это, в частности, означает что если мы изменим элементы массива внутри функции, то они изменятся и вне функции.

    Рассмотрим код этого примера:
    
    -   У нас есть функция inc, которая принимает массив и увеличивает первые пять элементов массива на 1.

    -   В функции main мы создаём массив под названием a из 5-ти элементов.

    -   Потом мы передаём массив a в функцию inc. При этом элементы массива не копируются внутрь функции.
        Вместо этого функция работает непосредственно с массивом a (только внутри функции он называется x).

    -   Внутри функции inc мы увеличиваем элементы массива на 1.
        При этом массив x функции inc это НЕ копия массива a из функции main.
        Массив x функции inc это и есть массив a из функции main, только под другим именем.
        Поэтому при изменении массива x из функции inc, изменится и массив a из функции main.

    -   После того как мы выйдем из функции inc, все элементы массива a будут увеличены на 1.
    
*/

#include <stdio.h>

void inc(int x[])
{
    for (int i = 0; i < 5; ++i)
        x[i] += 1;
}


int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    inc(a);

    for (int i = 0; i < 5; ++i)
        printf("%i ", a[i]);
    printf("\n");
}