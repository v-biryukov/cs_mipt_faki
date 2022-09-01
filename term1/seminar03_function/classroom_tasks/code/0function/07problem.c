/*
    Задача:

        На вход приходят два числа, вам нужно напечатать факториал от максимума этих чисел.
        Используйте уже написанные функции factorial и max.


        Вход                   |   Выход
        _______________________________________________
        1 5                    |   120
        _______________________|_______________________
        5 1                    |   120
        _______________________|_______________________
        2 10                   |   3628800
        _______________________|_______________________
        4 4                    |   24

*/


#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;

    return result;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    scanf("%i%i", &a, &b);



}