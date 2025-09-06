/*
    Нельзя делать несколько определений.
    Данный код не скомпилируется.
    Будет ошибка: redefinition of 'cat'
*/

#include <stdio.h>

int cat();
int cat();
int cat();

int cat()
{
    return 10;
}

int cat()
{
    return 20;
}

int main()
{
    printf("%i\n", cat());
}
