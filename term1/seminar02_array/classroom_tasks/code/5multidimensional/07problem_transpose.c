#include <stdio.h>

int main()
{
    int n, m;
    scanf("%i%i", &n, &m);



}


/*
    Задача:

        Напишите программу, которая будет сначала считывать с экрана 2 числа n и m.
        Потом эта программа должна считывать все элементы матрицы.
        Программа должна транспонировать матрицу и печатать её на экран

        Например, если на вход придёт матрица:

            3 3
            10 20 30
            40 50 60
            70 80 90
    
        То программа должна напечатать:

            10 40 70
            20 50 80
            30 60 90


        При решении этой задачи вы можете создать ещё одну матрицу и переписывать элементы в неё.


        При этом каждый раз вбивать матрицу руками необязательно.
        Матрицу можно считывать из файла вот так:

            ./a.out < matrix3.txt   (Linux)          a.exe < matrix3.txt   (Windows)

*/