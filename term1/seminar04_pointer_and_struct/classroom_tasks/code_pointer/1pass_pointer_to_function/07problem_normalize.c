#include <stdio.h>


int main()
{
    double a = 4.0;
    double b = 3.0;

    normalize(&a, &b);

    printf("%lf %lf\n", a, b);

}


/*
    Задача:

        Напишите функцию normalize, которая будет принимать 2 указателя на числа типа double.
        Эта функция должна делить оба этих числа на такое число, чтобы сумма квадратов этих чисел стала равна 1

        Другими словами, если x и y это координаты вектора, вам нужно сделать этот вектор единичным.

        То есть данная программа должна напечатать:

            0.800000 0.600000
*/