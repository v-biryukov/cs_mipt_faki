/*
    Строки и указатели
    
    Таким образом, все 3 способа передачи строки в функцию:
    
        void func(char s[])
        void func(char s[50])
        void func(char* s)

    Делают одно и то же.

    А именно, передают в функцию указатель на первый символ передаваемой строки.
    В дальнейшем в курсе для передачи массивов (в том числе строк) в функции будем передавать указатель,
    чтобы явно показывать что передаётся в функцию.
*/

#include <stdio.h>



void func(char* s)
{
    printf("s = %s\n", s);
    printf("Size of s = %zu\n", sizeof(s));
}


int main()
{
    char a[50] = "Tiger";
    

    printf("a = %s\n", a);
    printf("Size of a = %zu\n", sizeof(a));

    func(a);
}


/*
    Задача:

        Напишите функцию:

            void capitalize(char* s)

        которая будет принимать на вход строку (указатель на первый элемент строки) и делать все
        маленькие буквы большими.
        Вам могут понадобиться функции и библиотеки <ctype.h>:  islower и toupper.
*/