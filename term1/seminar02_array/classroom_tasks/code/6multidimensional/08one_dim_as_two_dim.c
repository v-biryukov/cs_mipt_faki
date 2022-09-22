/*
    Матрица, которая хранится в одномерном массиве

    Иногда может быть более удобно хранить элементы двумерной матрицы в обычном одномерном массиве.
    И это можно сделать, если просто хранить в одномерном массиве ряды матрицы последовательно.

    На самом деле в памяти двумерный массив так и хранится.
    Например, если мы создадим двумерный массив

        int a[4][3];

    то в памяти компьютера он будет храниться так:

        ═════╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗════
             │a[0][0]│a[0][1]│a[0][2]│a[1][0]│a[1][1]│a[1][2]│a[2][0]│a[2][1]│a[2][2]│a[3][0]│a[3][1]│a[3][2]│
        ═════╚═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╝════
    
    Если мы создадим одномерный массив

        int b[12];

    то в памяти компьютера он будет храниться так:

        ═════╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗════
             │ b[0]  │ b[1]  │ b[2]  | b[3]  │ b[4]  | b[5]  | b[6]  | b[7]  | b[8]  | b[9]  | b[10] | b[11] |
        ═════╚═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╧═══════╝════

    Очевидно, что это почти один и тот же объект, различающийся только способом индексации:

        a[i][j]  ->  b[i * m + j]

    где m = 3 - количество столбцов в матрице.


*/
#include <stdio.h>

int main()
{
    int a[4][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}, {45, 55, 65}};

    int b[12] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 45, 55, 65};

    printf("%i\n", a[2][1]);

    printf("%i\n", b[2 * 3 + 1]);



    int n = 4;
    int m = 3;

    printf("Array a:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            printf("%i\n", a[i][j]);
        printf("\n");
    }


    printf("Array b:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            printf("%i\n", b[i * m + j]);
        printf("\n");
    }

}