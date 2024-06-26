/*
    Операции с разными типами

    При проведении арифметических операций с разными типами:

        1)  Если один из операндов целое число, а второй - число с плавающей точкой, то
            результатом будет число с плавающей точкой.
            Например, если умножить int на float то получится float.

        2)  Если оба операнда целые числа или если оба операнда числа с плавающей точкой, то
            результатом будет число большего типа.
            Если умножить int на long long то получится long long.
            Если умножить double на float то получится double.

            При этом самый меньший тип, который будет результатом умножения это int.
            Если умножить char на char то получится int.
*/


#include <stdio.h>

int main()
{
    int a = 10;
    double b = 2.0;

    printf("%i\n", sizeof(a));
    printf("%i\n", sizeof(b));

    printf("%i\n", sizeof(a * b));
}