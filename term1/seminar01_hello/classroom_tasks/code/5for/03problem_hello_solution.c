/*
    Задача:
    
        Напишите программу, которая будет печатать на экран слово  Hello  10 раз.
        Все слова Hello должны быть разделены пробелом. 
        В конце строки нужно поставить символ переноса строки.
*/


#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        printf("Hello ");
    }
    printf("\n");
}


