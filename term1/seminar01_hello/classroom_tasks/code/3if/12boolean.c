/*
    Булевая алгебра 

    В булевой алгебре есть 2 элемента: false (ложь) и true (правда)
    Часто эти элементы называют 0 и 1

    И есть 3 операции с этими элементами:

        1)  Логическое И   (В языке C обозначается как &&)

                0 И 0 = 0
                0 И 1 = 0
                1 И 0 = 0
                1 И 1 = 1

            Другими словами логическое И является правдой тогда, когда оба аргумента являются правдой

        2)  Логическое ИЛИ   (В языке C обозначается как ||)

                0 ИЛИ 0 = 0
                0 ИЛИ 1 = 1
                1 ИЛИ 0 = 1
                1 ИЛИ 1 = 1

            Другими словами логическое ИЛИ является правдой тогда, когда хотя бы один аргумент является правдой


        3)  Логическое НЕ   (В языке C обозначается как !)

                НЕ 0 = 1
                НЕ 1 = 0

*/

#include <stdio.h>

int main() 
{
    int a = 1;
    int b = 0;

    printf("%i\n", a && b);
    printf("%i\n", a || b);
    printf("%i\n", !a);
}


/*
    Задачи:

        1)  Что напечатает эта программа?
            Проверьте себя, скомпилировав и напечатав результат

*/