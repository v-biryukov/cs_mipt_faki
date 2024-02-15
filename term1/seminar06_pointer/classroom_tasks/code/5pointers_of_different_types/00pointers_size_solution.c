/*
    Указатели разных типов


    Указатель хранит адрес первого байта памяти объекта на который он указывает.
    Неважно какого размера объект, большой он или маленький, адрес его первого байта
    будет иметь одинаковый размер.


    Таким образом, все указатели, независимо от их типа, имеют одинаковый размер.
    
    
    Размер указателя зависит от битности системы.
    На 32-х битных системах это 32 бита (4 байта), на 64-х битный это 64 бита (8 байт).
*/



#include <stdio.h>


int main()
{
    int a = 123;
    int* pa = &a;

    printf("size of int    = %zu\n", sizeof(a));
    printf("size of int*   = %zu\n", sizeof(pa));




    char b = 'T';
    char* pb = &b;

    printf("size of char   = %zu\n", sizeof(b));
    printf("size of char*  = %zu\n", sizeof(pb));
}