/*
    Задача Скобочки:

        Напишите рекурсивную функцию brackets, которая будет печатать некоторую скобочную последовательность. 
        brackets(n) должна сначала печатать n открывающихся скобочек, а затем n закрывающихся. 
        Например, вызов brackets(4) должен напечатать на экран (((())))


        Чтобы это сделать рекурсивно нужно сделать следующее:
            
            – Напечатать открывающуюся скобку
            – Напечатать n-1 открывающихся и n-1 закрывающихся скобок, используя вызов рекурсивной функции
            – Напечатать закрывающуюся скобку
*/


#include <stdio.h>


void brackets(int n)
{
    if (n <= 0)
        return;

    printf("(");
    brackets(n - 1);
    printf(")");
}

int main()
{
    brackets(4);
    printf("\n");

    brackets(10);
    printf("\n");
}

