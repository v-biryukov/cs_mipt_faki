/*
    Вернёмся на время к функции printf

    У неё есть для форматированной печати чисел. 
    А именно, в строке форматирования можно минимальное число символов, которые будут использованы для печати числа.
    Если число окажется меньше, то недостающие символы замостятся пробелами.

    В этом примере все печатаемые число займут минимум 4 символа.
    Например, при печати числа 12 перед ним поставятся 2 пробела.
*/


#include <stdio.h>


int main()
{
    printf("%4i\n", 1);
    printf("%4i\n", 12);
    printf("%4i\n", 123);
    printf("%4i\n", 1234);
    printf("%4i\n", 12345);
}


/*
    Задача: Скомпилируйте, запустите и протестируйте эту программу
*/
