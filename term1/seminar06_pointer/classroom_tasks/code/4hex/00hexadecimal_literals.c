/*
    Шестнадцатеричные числа

    При работе с памятью удобнее использовать шестнадцатеричные числа, а не десятичные.
    Например, один байт информации можно представить как двузначное шестнадцатеричное число.
    Причем байт может иметь значение соответствующее любому двузначному или однозначному числу
    в шестнадцатеричной записи. Тогда как, если бы мы использовали десятичные числа, то
    возможные значения байта находились на отрезке от 0 до 255, что не так удобно.
    

    Возможные значения одного байта:

            Десятичная              Двоичная                        Шестнадцатеричная

            от 0 до 255             от 0 до 11111111                от 0 до FF


    Язык C поддерживает шестнадцатеричные числа.
    Числовые литералы, начинающиеся с  0x  означают, что этот числовой литерал записывается
    в шестнадцатеричной системе.

    Например:

        0x123  это то же самое, что и  291

    так как 123 в шестнадцатеричной системе это 291 в десятичной.

*/

#include <stdio.h>


int main()
{
    int a = 0x123;

    printf("%i\n", a);
}



/*
    Задача:

        Создайте однобайтовое беззнаковое число и инициалицируйте его значением  0xA5.
        Напечатайте это число в десятичной системе счисления.
*/