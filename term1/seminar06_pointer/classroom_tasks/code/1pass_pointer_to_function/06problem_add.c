#include <stdio.h>


int main()
{
    int a = 10;
    int b = 20;


    printf("%i\n", add(&a, &b));

}


/*
    Задача:

        Напишите функцию add, которая будет принимать 2 указателя на числа типа int.
        Эта функция должна складывать значения переменных, чьи адреса эти указатели хранят.
        Вызовите эту функцию из функции main, чтобы вычислить сумму a и b.

        То есть данная программа должна напечатать:

            30
*/