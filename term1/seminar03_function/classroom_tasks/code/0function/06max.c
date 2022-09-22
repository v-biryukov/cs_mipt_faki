/*
    Создание своих функций

    Функция необязательно должна принимать только один аргумент.
    Можно создать функцию, которая будет принимать несколько аргументов.


    Давайте создадим свою функцию, которая будет принимать на вход 2 числа и возвращать максимум из этих чисел. 
    Назовём эту функцию max. Сделать это можно так:


        int max(int a, int b)
        {
            if (a > b)
                return a;
            else
                return b;
        }

    Примечания:

        1)  Данная функция принимает две переменные типа int (то есть два целых числа)
            Параметры функции a и b указываются через запятую, у каждого параметра нужно указать тип.


        2)  Ключевое слово return можно использовать в функции несколько раз.
            Когда программа дойдёт хотя бы до одного return, она выйдет из функции и вернёт соответствующее значение.




    Рассмотрим строку в функции main:

        printf("%i\n", max(1, 5));

    когда программа дойдёт до этой строки она начнёт вычислять функцию max, передав ей числа 1 и 5.
    Программа зайдёт в функцию max и будет считать, в этой функции, что a равен 1 и b равен 5.
    После того как программа вычислит нужное значение (5) она вернёт его из функции.
    После этого, она это число 5 подставит за место вызова функции, то есть она подставит 5 за место  max(1, 5).

*/


#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    printf("%i\n", max(1, 5));
    printf("%i\n", max(4, 2));
}


/*
    Задача:

        Что напечатает данная программа. Скомпилируйте эту программу, запустите и проверьте ваш ответ.
*/