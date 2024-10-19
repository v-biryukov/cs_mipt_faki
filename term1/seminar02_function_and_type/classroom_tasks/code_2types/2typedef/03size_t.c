/*
    Тип size_t

    Тип size_t - это один из наиболее важных и часто используемых типов при программировании на C и C++.
    Тип size_t – это беззнаковый тип целых чисел, который выбирается таким образом, чтобы он вмещал размер любого объекта.
    Этот тип должен быть достаточно большим, так как, например, размеры массивов могут быть очень большими.
    Представьте массив из 5 миллиардов элементов типа int. Размер такого массива будет 20 миллиардов.
    
    Внутри стандартной библиотеки этот тип определён примерно так:

        typedef unsigned long long size_t;

    или так:

        typedef unsigned int size_t;
    
    Обычно на 64-х битных системах размер size_t - 8 байт. Но размер типа size_t может различаться 
    в зависимости от вычислительной системы. На менее мощных системах size_t может иметь размер в 4 байта или даже 2 байта.
    Это означает, что на таких системах размер объекта не может превышать 2^32 и 2^16 байт соответственно.



    Тип size_t очень часто используется как тип счётчика для обхода массива.
    Предположим, что у нас есть очень большой массив и мы пытаемся обойти его вот так:

        for (int i = 0; i < n; ++i)
        {
            ...
        }

    Если размер массива будет больше чем может хранить int, то использование int для счётчика приведёт к ошибке - переполнению
    счётчика i. Правильней будет обходить массив вот так:

        for (size_t i = 0; i < n; ++i)
        {
            ...
        }

    По определению размер любого массива может поместиться в тип size_t и поэтому тут переполнение не произойдёт ни в каком случае.

    Для печати/считывания используется спецификатор %zu.
*/

#include <stdio.h>

int main()
{
    size_t a = 123;

    printf("%zu\n", a);
}


/*
    Задачи:

        1)  Выясните какой размер у size_t на вашей системе, напечатав его.

        2)  Создайте 2 переменные типа size_t и считайте их, используя scanf.
            Напечатайте произведение этих двух чисел.
*/