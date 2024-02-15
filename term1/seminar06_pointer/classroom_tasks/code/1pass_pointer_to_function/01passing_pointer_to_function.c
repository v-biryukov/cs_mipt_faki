/*
    Указатели и функции

    Как мы знаем, что любое выражение, которое мы передаём в функцию копируется (за исключением массивов).
    Указатели, как и обычные переменные, копируются в функции. Но что означает копия указателя?
    Если один указатель хранит адрес некоторой переменной, то и его копия будет хранить адрес той же самой переменной.


    Рассмотрим данный пример:

        В функции main создаётся переменная a и указатель p, хранящий адрес a.
        Потом мы передаём p в функцию и он туда копируется.

        Переменная p из функции main и переменная p из функции inc это разные переменные.
        Но, так как p из функции inc это копия p из функции main, то p из функции inc хранит то же самое, что и p из функции main.

        То есть p из функции inc хранит адрес a.
        Поэтому если мы разыменуем p из функции inc то получим a.
    

    Короче говоря, в функцию inc мы передали адрес переменной a и, используя этот адрес, мы изменили саму переменную a. 
*/

#include <stdio.h>

void inc(int* p)
{
    *p += 1;
}


int main()
{
    int a = 10;
    int* p = &a;

    inc(p);

    printf("%i\n", a);
}


/*
    Задача:

        Что напечатает данная программа?
        Скомпилируйте программу и запустите, чтобы проверить себя.
*/