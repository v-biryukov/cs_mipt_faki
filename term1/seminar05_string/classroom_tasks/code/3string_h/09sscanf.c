/*
    Функция sscanf из stdio.h
    
    Полезная функция, которая очень похожа на функцию scanf, но вместо того, чтобы считывать с экрана,
    эта функция считывает из строки, которую вы её передадите.
    Первым аргументом ей передаётся строка, в которую будем печатать. А, начиная со второго аргумента,
    мы передаём ей всё то же самое, что передаём в функцию scanf.
*/


#include <stdio.h>

int main() 
{
    char str[100] = "12:05";

    int hours, minutes;
    sscanf(str, "%i:%i", &hours, &minutes);

    printf("%i %i\n", hours, minutes);
}



/*
    Задачи:

        1)  Напишите функцию to_int. На вход этой функции должна передаётся строка, в которой содержится некоторое 
            целое число, из диапазона соответствующему типу int.
            Эта функция должна конвертировать строку в число типа int и возвращать это число. 

    
        2)  Напишите функцию set_time_string, которая будет принимать 3 аргумента:
                
                1)  строка, в которую содержится время
                2)  указатель типа int - по этому адресу нужно записать количество часов
                3)  указатель типа int - по этому адресу нужно записать количество минут
                
            
            Например, после следующего кода:

                char str[20] = "06:20";

                int hours, minutes;
                set_time_string(str, &hours, &minutes);

            В переменную hours должно записаться число 6, а в переменную minutes - число 20


        3)  На вход программе приходит выражение вида число+число, например вот такое: "10+20"
            Вам нужно вычислить результат этого сложения и напечать число на экран.

*/