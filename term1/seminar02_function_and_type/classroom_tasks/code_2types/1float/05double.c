/*
    Числа типа double

    Числа типа double - это более точный тип данных для хранения вещественных чисел.
    Числа типа double занимают в памяти 8 байт, что в два раза больше, чем числа типа float.
    Их также называют числами двойной точности.

    Они могут хранить вещественные числа с точностью в 15 значащих десятичных цифр.
    Десятичная степень числа может принимать значения от -308 до 308.

    Спецификатор для printf/scanf для чисел типа double:

        %lf
*/

#include <stdio.h>

int main()
{
    printf("%i\n", sizeof(double));

    double a = 123.45678901234567890;
    printf("%lf\n", a);

    printf("%.20lf\n", a);


    double b = 1e-50;
    printf("%.60lf\n", b);
}