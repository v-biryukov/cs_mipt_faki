/*
    Язык C++ обратно совместим с языком C. То есть почти любая программа на C будет работать на C++
    Например, программа из этого примера будет работать.

    Обратите внимание, что для имён, пришедших из языка C использовать std:: не обязательно.

    Программа работает, несмотря на то, что мы используем библиотечные 
    функции printf и sqrt без указания пространства имён std.
*/

#include <stdio.h>
#include <math.h>


int main() 
{
    printf("%f\n", sqrt(3));
}

/*  Задача:

    1)  Что напечатает данная программа?

    2)  Использование библиотечных функций без std опасно, так как может привести к ошибкам,
        связанных с совпадением имён. Помните, что большая программа может иметь миллионы
        строк кода и совпадение ваших имен и библиотечных имён очень вероятно.


        Напишите следующую функцию перед функцией main
        
        int sqrt(int x)
        {
            return x + 1;
        }

        Что теперь напечатает программа? Объясните результат.
*/



