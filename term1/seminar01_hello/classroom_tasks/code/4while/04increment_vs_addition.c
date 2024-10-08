/*
    Сложение и присваивание сложения


    Следует отличать оператор сложения  +  и оператор присваивания сложения  +=

        Оператор сложения +
            
            Возвращает новое число, равное сумме операндов
            Оператор сложения не меняет операнды

            То есть если мы напишем   a + 10  то переменная a не изменится
            Просто на место выражения  a + 10  подставится сумма

    
        Оператор присваивания сложения  +=

            Этот оператор не создаёт новое число, а прибавляет к левому операнду правый
            Оператор сложения меняет левый операнд

            То есть, если мы напишем   a += 100  то переменная a изменится - увеличится на 100

            Аналогичным образом работают операторы   *=   /=   %=

*/


#include <stdio.h>

int main()
{
    int a = 10;
    int b = a + 10;

    printf("%i %i\n", a, b);


    a += 100;
    b *= 2;

    printf("%i %i\n", a, b);
}




/*
    Задачи:

        1)  Что напечатает данная программа? Скомпилируйте, запустите программу и проверьте свои догадки.
*/