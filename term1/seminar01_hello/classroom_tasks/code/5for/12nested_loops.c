/*
    Вложенные циклы

    Часто бывает необходимо использовать ещё один цикл в каждой итерации цикла.
    Это можно сделать просто использовав цикл внутри другого цикла.
    Только при этом нужно использовать разные имена переменных счётчиков для разных циклов.


    Как работает этот пример?

        -   Заходим в первый цикл с i = 1

        -   Внутри первого цикла заходим во второй цикл с j = 1
        -   Печатаем на экран  1, 1

        -   Так как мы всё ещё находимся во внутренем цикле, то делаем следующую итерацию внутреннего цикла с j = 2
        -   Печатаем на экран  1, 2

        -   Продолжаем выполнять внутренний цикл для j = 3 и печатаем   1, 3
        -   На следующей итерации условие  j <= 3  уже не выполняется, поэтому выходим из внутренего цикла.

        -   Это всё была одна итерация внешнего цикла с i = 1. Теперь мы переходим на следующую итерацию с i = 2.

        -   Теперь  i = 2  и мы заново начинаем выполнять внутрений цикл, начиная с j = 1
        -   Внутрений цикл теперь напечатает:

                2, 1
                2, 2
                2, 3

        -   Аналогично делаем итерации для  i = 3  и  i = 4

*/



#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            printf("%i, %i\n", i, j);
        }
    }
}


/*
    Задачи:

        1)  Скомпилируйте программу, запустите её.

        2)  Измените программу так, чтобы она печатала таблицу умножения вот такую:

                 1  2  3  4  5  6  7  8  9
                 2  4  6  8 10 12 14 16 18
                 3  6  9 12 15 18 21 24 27
                 4  8 12 16 20 24 28 32 36
                 5 10 15 20 25 30 35 40 45
                 6 12 18 24 30 36 42 48 54
                 7 14 21 28 35 42 49 56 63
                 8 16 24 32 40 48 56 64 72
                 9 18 27 36 45 54 63 72 81

            Для форматированной записи числа так, чтобы оно занимала минимум 2 символа нужно использовать  %2i
*/