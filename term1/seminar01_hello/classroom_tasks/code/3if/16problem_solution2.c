#include <stdio.h>

int main()
{
    int a;
    scanf("%i", &a);

    if (a < 0)
        a = -a;

    if (a >= 10 && a < 100)
        printf("Yes\n");
    else
        printf("No\n");
}



/*
    Другое решение заключается в том, чтобы найти модуль числа a
    Если a меньше нуля, то просто меняем его знак

    Проверяем на двузначность также, как и раньше

*/