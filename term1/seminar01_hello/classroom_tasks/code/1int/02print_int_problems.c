/*
    Печать переменных типа int на экран

    Печатать значения переменных можно с помощью функции printf.
    Для этого в строке, передаваемой функции printf, в том месте где вы хотите напечатать 
    значение переменной типа int нужно написать %i

    Тогда вместо  %i  подставится значение переменной

*/


#include <stdio.h>


int main()
{
    int a = 10;
    int b = 20;

    printf("I am %i years old\n", a);

    printf("a = %i\n", a);

    printf("I am %i years old and have %i friends\n", a, b);
}



/*
    Задачи:


        1)  Что напечатает данная программа?

        2)  Скомпилируйте и запустите программу и проверьте ваше предположение

        3)  Напишите вызов функции printf который печатал бы на экран фразу

                I am %i centimeters tall and weight %i kilograms

            где вместо первого %i нужно подставить значение в переменной a, 
            а вместо второго %i нужно подставить значение в переменной b


        4)  Напишите вызов функции printf который печатал бы на экран

                (%i, %i)

            где вместо первого %i нужно подставить значение в переменной a, 
            а вместо второго %i нужно подставить значение в переменной b

*/