/*
    Область видимости (англ. scope) - это часть программы, в пределах которой имя объявленной переменной остаётся "видимым".
    
    В языке C область видимости как правило ограничивается фигурными скобочками.
    То есть все переменные, объявленные внутри фигурных скобок доступны внутри скобок и не доступны вне этих скобок.


    Рассмотрим данный пример подробно:

        -   if (1) просто означает, что условие для if равно 1, следовательно программа всегда зайдёт внутрь этого if.

        -   Тело оператора if ограниченное фигурными скобками образует область видимости.
            Внутри этой области объявлена переменная a. Эта переменная будет доступна внутри этой области видимости, 
            соответственно функция printf внутри тела оператора if сработает.

        -   Но вне области видимости переменная a не будет доступна, следовательно вызов функции printf вне области
            видимости приведёт к ошибке компиляции.
*/


#include <stdio.h>


int main()
{

    if (1)
    {
        int a = 10;
        printf("%i\n", a);
    }

    printf("%i\n", a);
}


/*
    Задача:

        Попробуйте скомпилировать программу и убедитесь, что последняя строка

            printf("%i\n", a);

        приводит к ошибке, так как в этом месте переменная a неизвестна.
*/