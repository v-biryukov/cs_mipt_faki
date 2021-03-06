#include <stdio.h>

/*
    if (<условие>)
    {
        // Если условие не равно 0
    }
    else
    {
        // Если условие равно 0
    }


    while (<условие>)
    {
        // Будет работать пока <условие> не равно нулю
    }


    do
    {
        // Будет работать пока <условие> не равно нулю
    } while (<условие>)


    for(<то, что выполняем до цикла>;   <условие>;   <то, что выполняем в конце каждой итерации>)
    {
        // Будет работать пока <условие> не равно нулю
    }


    break    - заканчивает цикл
    continue - заканчивает 1 итерацию

    && - И
    || - ИЛИ
    !  - НЕ
      
*/


// ||||||||||||||||||    Место для ваших функций   |||||||||||||||||||||||||||||||||||||




// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


int main()
{
    // Что напечатает следующий код?
    if (42)
        printf("YES\n");
    else
        printf("NO\n");


    int a = -47, b = 512;
    // 1) Напишите условие: если a меньше 14 ИЛИ если b четно, то следующий код должен напечатать OK
    if (     )
        printf("OK\n");



    // 2) Напишите условие: если a меньше b И если b делится на 3, то следующий код должен напечатать OK
    if (     )
        printf("OK\n");




    printf("Task 3:\n");
    // 3) Используйте цикл for, чтобы напечатать все числа от 1700 до 0, которые делятся на 17



    printf("Task 4:\n");
    // 5) Написать код, который считывает целые числа и печатает их до первого отрицательного.
    // Например, если на вход поступает последовательность 5 0 74 -3 5 31 -7 -10, то программа должна напечатать
    // 5 0 74. Использовать оператор break.



    printf("Task 5:\n");
    // 6) Часть года: Написать функцию part_of_year на вход которой подаётся целое число – число дней прошедших с начала
    // года. Она должна возвращать вещественное число типа float – доля прошедшего года(от 0 до 1). В году 365 дней
    // Тесты: (раскомментируйте, чтобы проверить вашу функцию)
    // printf("%f\n", part_of_year(55));  // Должно напечатать ~ 0.15068
    // printf("%f\n", part_of_year(300)); // Должно напечатать ~ 0.821918    
    // printf("%f\n", part_of_year(365)); // Должно напечатать ~ 1.000000

    printf("Task 6:\n");
    // 7) Написать функцию, is_hyperbola которая проверяет принадлежат ли 2 вещественных числа области {y > 1/x, x > 0}. 
    // Использовать тип double. Функция должна возвращать 0 или 1. 
    // Тесты: (раскомментируйте, чтобы проверить вашу функцию)
    // printf("%f\n", is_hyperbola(2, 4));    // x = 2, y = 4  ->  1
    // printf("%f\n", is_hyperbola(0, 2));    // x = 0, y = 2  ->  0
    // printf("%f\n", is_hyperbola(0, 0));    // x = 0, y = 0  ->  0
    // printf("%f\n", is_hyperbola(-2, -5));  // x =-2, y =-5  ->  0


}