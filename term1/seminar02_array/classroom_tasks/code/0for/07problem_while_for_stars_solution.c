/*
    Задача:
    
        Данная программа считывает число n и печатает на экран n звёздочек.
        То есть, если на ввести 5, то программа напечатает  *****

        Тут используется цикл while. Измените программу так, чтобы она использовала цикл for.
*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    for (int i = 1; i <= n; i += 1)
        printf("*");

    printf("\n");
}