/*
    Два указателя хранят одинаковый адрес

    Два или более указателей могут хранить один и тот же адрес.
    В этом случае мы можем менять переменную, адрес которой хранят эти указатели
    с помощью любого их этих указателей.
*/

#include <stdio.h>


int main()
{
    int a = 10;

    int* p = &a;
    int* q = &a;


    *p += 1;
    *q += 1;

    printf("%i\n", a);
}