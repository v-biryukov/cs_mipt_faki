/*
    Функции, которые ничего не возвращают

    void функции можно вызывать только сами по себе. То есть, одна строка на один вызов функции. Вот так:

        hello();

    Такие функции нельзя использовать в выражениях, например нельзя написать так:

        int a = hello();

    или так:

        printf("%i\n", hello());

    Потому что тут непонятно что должно подставится заместо вызова hello().
    В результате, обе эти строки приведут к ошибке.
*/

#include <stdio.h>

void hello()
{
    printf("Hello World!\n");
}

int main()
{
    int a = hello();

    printf("%i\n", hello());
}


/*
    Задача:

        Попытайтесь скомпилировать эту программу. Убедитесь, что это приводит к ошибке.
*/