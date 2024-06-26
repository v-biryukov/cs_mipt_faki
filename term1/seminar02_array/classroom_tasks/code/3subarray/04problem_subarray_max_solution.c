/*
    Задача:

        Пусть у нас есть массив:
            
            int a[10] = {42, 75, 21, 82, 83, 89, 20, 99, 36, 63};

        На вход программе поступают 2 числа, второе больше первого. Вам нужно найти максимум на подмассиве,
        описываемым этими числами.
        

        Вот какой выход программы должен быть при данных входах:

            Вход    |    Выход
                    |    
            2 6     |    89
                    |
            0 3     |    75
                    |
            0 10    |    99
                    |
            0 1     |    42

*/


#include <stdio.h>

int main()
{
    int a[10] = {42, 75, 21, 82, 83, 89, 20, 99, 36, 63};

    int left, right;
    scanf("%i%i", &left, &right);


    int max = a[left];

    for (int i = left + 1; i < right; ++i)
    {
        if (a[i] > max)
            max = a[i];
    }

    printf("%i\n", max);

}