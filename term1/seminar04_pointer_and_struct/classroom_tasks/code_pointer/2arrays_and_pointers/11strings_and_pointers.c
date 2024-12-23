/*
    Строки и указатели
    
    Как стало известно на прошлом семинаре, строки это просто массивы с элементами типа char.
    Поэтому и в функции строки передаются также как и массивы.

    То есть вместо самой строки в функцию копируется указатель на первый символ строки.

    В этом примере:

        -   a в функции main является строкой, размером в 50 байт
        -   s в функции func является указателем на первый символ передаваемой строки.

*/

#include <stdio.h>



void func(char s[])
{
    printf("s = %s\n", s);
    printf("Size of s = %zu\n", sizeof(s));
}


int main()
{
    char a[50] = "Tiger";
    

    printf("a = %s\n", a);
    printf("Size of a = %zu\n", sizeof(a));

    func(a);
}