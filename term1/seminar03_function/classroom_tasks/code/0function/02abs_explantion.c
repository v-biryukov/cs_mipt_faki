/*
    Функция abs

    В качестве примера функции рассмотрим функцию  abs  из библиотеки stdlib.
    Эта функция принимает число типо int и возвращает абсолютное значение (модуль) этого числа.
    Например, если на вход этой функции пришло число -10, то она вернёт 10. А если пришло 10, то она вернёт тоже 10.

    То есть эта функция делает следующее:

        1)  Принимает одно число типа int
        2)  Вычисляет модуль этого числа
        3)  Возвращает вычисленный модуль (тоже число типа int)


    Чтобы использовать функцию мы должны её вызвать. Синтаксис вызова функции такой: 

        -   сначала пишем имя функции, 
        -   сразу после имени, в круглых скобочках, пишем то, что мы в эту функцию передаём

    Например, чтобы вызвать функцию abs можно написать:

        abs(-10)

    Это означает, что мы вызываем функцию abs и передаём в неё число -10. 
    Как только программа дойдёт до этого вызова она начнёт вычислять модуль числа -10.
    После того как вычисление закончится, на место вызова функции подставится вычисленное значение (в данном случае это число 10).
    Получается, что на место abs(-10) подставится число 10.



    Рассмотрим строку

        int a = abs(-10);

    когда программа дойдёт до этой строки она начнёт вычислять модуль числа -10.
    После того, как она вычислит этот модуль и получит число 10, она это число 10 подставит за место вызова функции,
    то есть она подставит 10 за место abs(-10) и для программы эта строка будет выглядеть как.

        int a = 10;



    Рассмотрим строку

        printf("%i\n", abs(-20));

    когда программа дойдёт до этой строки она начнёт вычислять модули числа -20.
    После того, как она вычислит этот модуль и получит число 20, она это число 20 подставит за место вызова функции,
    то есть она подставит 20 за место  abs(-20) и для программы эта строка будет выглядеть как.

        printf("%i\n", 20);

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = abs(-10);
    printf("%i\n", a);

    printf("%i\n", abs(-20));
}


/*
    Задача:

        Скомпилируйте эту программу и запустите. Для этого вам нужно сделать следующее:


            а)  Откройте терминал и перейдите в папку 0function с помощью команды:

                cd путь_до_папки_0function


            б)  Скомпилируйте программу с помощью команды

                gcc 01abs.c


            в)  Запустите команду так:

                ./a.out    (Linux)                a.exe    (Windows)
*/