/*
    Функция strcpy
    
    К сожалению, функция strcpy является небезопасной так как она не проверяет поместится ли копия строки
    в тот массив, в который мы её записываем. Функция strcpy и не может это сделать, так как на вход ей 
    передаются указатели и она ничего не знает о размерах строк.

    Из-за этого функция strcpy может выйти за пределы массива, в который она записывает,
    что приведёт к ошибке - неопределённое поведение (UB).

    Например, в этой программе содержится такая ошибка. Мы пытаемся записать строку LargeElephant
    длиной в 13 символов в массив a, чей размер всего 10 байт.
    Для такой строки нужен массив в как минимум 14 байт.

    Поэтому нужно всегда следить поместится ли ваша строка в тот массив в который вы записываете.
*/



#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = "Mouse";
    char b[50] = "LargeElephant";


    strcpy(a, b); // UB, выйдет за пределы массива a
}
