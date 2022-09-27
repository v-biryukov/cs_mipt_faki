/*
    Строки языка C

    Строки языка C представляют собой массивы чисел типа char, которые хранят коды символов.
    Cоздать строку можно так:

        char a[10] = {77, 73, 80, 84, 0};

    а можно заменить числа-коды на символьные литералы:

        char b[10] = {'M', 'I', 'P', 'T', '\0'};

    но специально для массивов, хранящих числа типа char в языке C можно делать так:

        char c[10] = "MIPT";

    Все эти три строки делают одно и то же: задают первые 5 элементов массива следующими числами: 77, 73, 80, 84, 0
    а остальные числа забивают нулями. Выражение  "MIPT"  называется строковым литералом.




    Обратите внимание, что в конце каждой строки мы ставим символ с кодом 0. Благодаря этому символу мы можем знать где 
    строка заканчивается, то есть длину строки. Длину строки следует отличать от размера массива, в котором она хранится.
    Для строки приведённой выше, длина равна 4 символа, но при этом размер массива в котором она хранится
    равен 10 элементов из которых используется только 5 (4 на символы строки и 1 на завершающий символ 0).

           |-------------- Массив a ----------------|
        ═══╤═══╤═══╤═══╤═══╤════╤═══╤═══╤═══╤═══╤═══╤═══
           │ M │ I │ P │ T │ \0 │   │   │   │   │   │   
        ═══╧═══╧═══╧═══╧═══╧════╧═══╧═══╧═══╧═══╧═══╧═══
           |---- Длина ----|
*/


#include <stdio.h>

int main()
{
    char a[10] = {77, 73, 80, 84, 0};
    char b[10] = {'M', 'I', 'P', 'T', '\0'};
    char c[10] = "MIPT";

    for (int i = 0; i < 10; ++i)
        printf("%i ", a[i]);
    printf("\n");


    for (int i = 0; i < 10; ++i)
        printf("%i ", b[i]);
    printf("\n");


    for (int i = 0; i < 10; ++i)
        printf("%i ", c[i]);
    printf("\n");
}