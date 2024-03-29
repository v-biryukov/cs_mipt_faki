#include <stdio.h>


int main()
{
    char a[5] = {0x41, 0x42, 0x43, 0x44, 0x00};


    for (size_t i = 0; i < 5; ++i)
    {
        printf("%hhx ", a[i]);
    }
    printf("\n");


    printf("%s\n", a);




    char b[5] = {0x61, 0x62, 0x63, 0x64, 0x65};


    for (size_t i = 0; i < 5; ++i)
    {
        printf("%hhx ", b[i]);
    }
    printf("\n");


    printf("%s\n", b);
}



/*
    Решение:

        
        Данная программа содержит неопределённое поведение в строке:

            printf("%s\n", b);

        Функция printf со спецификатором %s принимает некоторый адрес и последовательно печатает все байты как символы, 
        начиная с переданного адреса и пока не встретит нулевого символа.
        Так как массив b не содержит нулевого байта, то функция printf выйдет за границы этого массива.
        Это неопределённое поведение (UB).
        Если в программе есть хотя бы одно неопределённое поведение, то она может делать всё что угодно.



        Но, скорей всего, функция printf со спецификатором %s выйдет за границы массива b и будет печатать байты,
        идущие за этой границей пока случайно не встретит нулевой символ.
        Есть некоторая вероятность, что за массивом b будет лежать массив a, и тогда printf напечатает строку a
        сразу после печати содержимого массива b. 
*/