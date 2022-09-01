/*
    Данная программа считывает 2 числа и печатает все простые числа на отрезке от a до b.
    Но при взгляде на программу может быть не так понятно, что программа делает.

    Задача:

        Выделите из этой программы часть, которая отвечает за проверку числа на простоту в отдельную функцию
        Для этого создайте функцию is_prime, которая будет принимать одно число и проверять, является ли это число простым.
        Если число простое, то функция is_prime должна возвращать 1, иначе функция is_prime должна возвращать 0.

        Используйте функцию is_prime, чтобы сделать программу более понятной.
*/




#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%i%i", &a, &b);

    for (int number = a; number <= b; ++number)
    {
        int is_prime = 1;

        for (int i = 2; i * i <= number; ++i)
        {
            if (number % i == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
            printf("%i ", number);
    }
    printf("\n");
}