/*
    Функция strcmp
    
    int strcmp(const char* a, const char* b))  -  Сравнивает строки a и b лексикографически
                                                  Возвращает отрицательное число, если a < b
                                                             положительное число, если a > b
                                                             ноль, если a и b равны


    Что означает лексикографическое сравнение?

    Для строк это означает алфавитный порядок.
    Более точно для данного случая это сравнение по коду ASCII первого несовпадающего символа строк.
    Например:

        "Cat"  <  "Dog"     так как код ASCII символа 'C' меньше, чем код ASCII символа 'D'

        "Cat"  >  "Camel"   так как  't' > 'm'

        "Cat"  <  "cat"     так как  'c' > 'C'

        "Cat"  <  "Cats"    так как  's' > '\0'

        
    

    char a[20] = "Mouse";
    char b[20] = "Elephant";

    Строки это массивы, поэтому их нельзя просто сравнивать:
    
        if (a == b)  // Не работает

    Это не будет работать! Нужно использовать strcmp:

        if (strcmp(a, b) == 0)

*/


#include <stdio.h>
#include <string.h>

int main() 
{
    char a[20] = "Mouse";
    char b[20] = "Elephant";

    if (strcmp(a, b) > 0)
        printf("Mouse is bigger than Elephant\n");
    else
        printf("Elephant is bigger than Mouse\n");
}


/*
    Задачи:

        1)  На вход приходят 2 слова, разделённые пробелом. Вам нужно напечатать максимальное из этих слов.
            Длины строк меньше 100 символов.


        2)  На вход приходят 3 слова, разделённые пробелами. Вам нужно напечатать максимальное из этих слов.
            Длины строк меньше 100 символов.

*/