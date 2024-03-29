/*
    Перемещение файлового указателя в начало файла. Функция rewind.

    Файловый указатель, это некоторое число, которое описывает положение в файле.
    Считывание/запись всегда происходит, начиная с этого числа.

    По сути, файловый указатель является аналогом курсора (вертикальной черты) в обычном текстовом редакторе.

    Сразу после открытия файла на чтение, значение файлового указателя равно 0, он указывает на первый символ файла.
    После какого-либо считывания файловый указатель перемещается вперёд на количество считанных символов.
    Например, если мы вызовем fgetc, то считываться будет символ, на который указывает файловый указатель.
    И если функция fgetc считает символ, то после этого значение файлового указателя увеличится на 1.
    Если же мы вызовем функцию fscanf и она считает 8 символов, то файловый указатель передвинется на 8 символов вперёд.

    Функция rewind устанавливает файловый указатель в начало файла.
*/

#include <stdio.h>

int main()
{
    FILE* file = fopen("animals.txt", "r");


    char a[20];
    fscanf(file, "%19s", a);

    rewind(file);

    char b[20];
    fscanf(file, "%19s", b);



    printf("a = %s\n", a);
    printf("b = %s\n", b);


    fclose(file);
}


/*
    Задача:

        Что напечатает данная программа?
        Что она напечатает, если убрать вызов функции rewind?
*/