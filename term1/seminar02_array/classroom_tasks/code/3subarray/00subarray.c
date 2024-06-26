/*
    Подмассивы


    Очень часто, во многих алгоритмах, требуется применить какую-либо операцию не к отдельному 
    элементу массива, а к некоторой части массива.


    Подмассив - это непрерывное подмножество массива. 
    Например, если у нас есть массив:

        int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    То подмассивами будут  {30, 40, 50, 60}  или  {50, 60, 70, 80, 90}  или  {10, 20}   или   {30}  так как это непрерывные подмножества.
    Но, например, {30, 40, 60, 70}  подмассивом не будет так как число 50 было пропущено и это множество не является непрерывным.



    В отличии от многих других языков программирования, в языке C нет никаких встроенных средств для работы с подмассивами.
    Но это не является непреодолимым препятствием, так как можно всё написать самим.

    Тут отображены элементы массива  a   и их индексы:

        Элементы:   10    20    30    40    50    60    70    80    90    100
        Индексы:     0     1     2     3     4     5     6     7     8     9

    Допустим мы хотим как-то описать подмассив  {30, 40, 50, 60} в массиве a.  Как это сделать?

        Способ 1:

            Мы знаем, что первый элемент подмассива имеет индекс 2, а последний - индекс 5.
            Поэтому, если мы заведём две переменные  left = 2  и  right = 5,  то они будут описывать наш подмассив.
            Если затем мы передадим сам массив и эти 2 числа на вход какого-либо алгоритма, то в этом алгоритме
            мы сможем понять с каким подмассивом нужно работать.
            Например, мы сможем распечатать наш подмассив так:

                for (int i = left; i <= right; ++i)
                    printf("%i ", a[i]);


        Способ 2:

            Заведём две переменные  left = 2  и  right = 6  и при этом договоримся, что элемент  a[right] не включается в подмассив.
            Если затем мы передадим сам массив и эти 2 числа на вход какого-либо алгоритма, то в этом алгоритме
            мы тоже сможем понять с каким подмассивом нужно работать.
            Например, мы сможем распечатать наш подмассив так:

                for (int i = left; i < right; ++i)
                    printf("%i ", a[i]);


    Оба способа для хранения информации о подмассиве допустимы. 
    Но способ 2 используется чаще и мы будем придерживаться его в данном курсе.

*/



#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for (int i = 0; i < 10; ++i)
        printf("%i ", a[i]);
    printf("\n");



    int left = 2;
    int right = 6;

    for (int i = left; i < right; ++i)
        printf("%i ", a[i]);
    printf("\n");
}