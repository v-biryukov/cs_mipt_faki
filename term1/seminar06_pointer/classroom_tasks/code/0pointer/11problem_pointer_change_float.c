/*
    Задача:

        У нас есть 3 переменные типа double, равные разным числам. 
        Также у нас есть один указатель типа double*, равный адресу одной из переменных.

        Вам нужно, используя этот один указатель, изменить значения трёх переменных так,
        чтобы они изменились следующим образом:

            a   должно возвестись в квадрат
            b   должно стать корнем от себя
            c   должно стать модулем от себя


        Создавать новые указатели нельзя.
        Изменять переменные можно только через указатель.
        Но можно присваивать указателю адреса других переменных.
        Код можно писать только между двумя коментариями.

        Понадобится математическая библиотека math.h
*/


#include <stdio.h>


int main()
{
    double a = 1.5;
    double b = 5.0;
    double c = -9.1;

    double* p = &a;

    // Пишите ваш код ниже





    // ||||||||||||||||||||

    printf("%lf %lf %lf\n", a, b, c);
}


