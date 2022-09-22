/*
    Считывание нескольких чисел

    Часто нужно считать несколько чисел.
    Заводить отдельную переменную под каждое число не выход, так как чисел может быть очень много.

    Но можно считывать всё в цикле в одну и туже переменную.
    В этом примере цикл while повторяется 5 раз.
    Внутри цикла while мы считываем число и печатаем это число, увеличенное на 1.

    В результате, если вы на вход подадите числа

        10 20 30 40 50

    Программа напечатает

        11 21 31 41 51
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

/*
    Задачи:

        1)  Скомпилируйте и запустите программу. Передайте на вход программе строку

                10 20 30 40 50

            и проверьте результат.


        2)  Видоизмените программу так, чтобы она не увеличивала числа на 1, а удваивала их.
            То есть, если на вход придут числа:

                10 20 30 40 50

            то программа должна напечатать

                20 40 60 80 100

        3)  Что будет, если ввести только 3 числа, а потом нажать Enter, а потом ввести оставшиеся 2 числа?
            Что будет, если вводить числа по одному?

*/