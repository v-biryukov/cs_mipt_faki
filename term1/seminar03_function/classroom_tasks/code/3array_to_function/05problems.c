/*
    Задачи:

        1)  Напишите функцию mult2, которая принимает на вход массив и его размер, а затем умножает каждый элемент массива на 2. 
            Протестируйте эту функцию в функции main. Используйте функцию print_array для печати массива.

        2)  Напишите функцию sqr, которая принимает на вход массив и его размер, а затем возводит каждый элемент массива в квадрат.
            Протестируйте эту функцию в функции main. Используйте функцию print_array для печати массива.

        3)  Напишите функцию add_x, которая принимает на вход массив, его размер и некоторое число x, 
            а затем прибавляет ко всем элементам массива это число x.
            Протестируйте эту функцию в функции main. Используйте функцию print_array для печати массива.

*/

#include <stdio.h>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%i ", array[i]);
    printf("\n");
}


int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

}