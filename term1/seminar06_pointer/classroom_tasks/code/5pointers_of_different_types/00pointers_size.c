/*
    Указатели разных типов


    Указатели могут иметь разные типы, например:

        int*   float*   char*   long long*   int**   и т. д.
    
    Если у нас есть тип type, то тип указателя на объект типа type будет типом  type*
    Таким образом у нас есть бесконечное количество разных типов указателей.


    В этом разделе мы разберёмся, чем различаются разные типы  указателей.
    Например, чем различаются указатели типов  int*  и  char*?


    Начнём с выяснением размеров этих типов.
    Известно, что размер int это обычно 4 байта (хотя он может различаться на разных системах),
    а размер char это 1 байт.


    Как вы думаете чему равны размеры  int*  и  char* ?
    Различаются ли они или равны?

    Задача:

        Определите чему равные размеры типов  int, char, int*, char* на вашей системе.
*/



#include <stdio.h>


int main()
{
    int a = 123;
    int* pa = &a;


    char b = 'T';
    char* pb = &b;
}