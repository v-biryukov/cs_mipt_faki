/*
    Задача:

    Напишите программу, которая будет считывать число типа unsigned int в шестнацетеричной записи
    и обращать порядок байт в этом числе.

    Например, если на вход придёт число  11aa22bb, то вы должны его сделать равным  bb22aa11.
    Вы должны сначала изменить число, а потом напечатать его одним вызовом функции printf.
*/



#include <stdio.h>


int main()
{
    unsigned int a;
    scanf("%x", &a);


    // |||||||  Ваш код ниже  ||||||||||||



    // |||||||||||||||||||||||||||||||||||

    printf("%x\n", a);
}