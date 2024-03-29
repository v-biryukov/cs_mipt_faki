/*
    Рассмотрим подробнее как происходит считывание с экрана и печать на экран.

    Вот например мы ввели числа

        10 20 30 40 50
    
    и нажали Enter.

    Согласно программе, сначала должно считаться число 10 в переменную a и напечататься a + 1 , то есть 11.
    Потом мы увеличиваем i и переходим на следующую итерацию.
    На следующей итерации мы снова считываем в переменную a. Но в этот раз программа не просит нас ещё раз ввести число.
    Она запомнила всё, что мы вводили в первый раз, и продолжит считывать следующее число оттуда. 
    В итоге в a считается число 20 и на экран напечатается 21. И так далее до конца программы.


    Если же мы в начале ввели только 3 числа
    
        10 20 30
     
    и нажали Enter.

    То программа будет считывать то, что вы подали на вход до тех пор, пока числа там не закончатся.
    Когда числа закончатся, при следующем вызове scanf программа попросит пользователя ввести ещё числа.


    При этом программа запоминает и считывает только те число, которые вы ввели в терминале.
    Числа, которые печатаются с помощью printf никак не могут быть считаны.

    Из-за того, что функции printf и scanf пользуются одним терминалом у программистов-новичков может возникнуть путаница.
    Но на самом деле printf и scanf работают полностью независимо и scanf никак не может считать то, что напечатал printf.
    
*/


#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 5)
    {
        int a;
        scanf("%i", &a);
        printf("%i ", a + 1);
        i += 1;
    }
    printf("\n");
}
