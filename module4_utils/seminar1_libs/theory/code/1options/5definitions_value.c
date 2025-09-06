/*
    Макросу можно задать значение в коде программы:

        #define CAT 10

    Либо с помощью опций компилятора:

        gcc -DCAT=10 main.c

    Если эту программу скомпилировать без опций:

        gcc 5definitions_value.c

    то программа ничего не напечатает.
    Если эту программу скомпилировать так:

        gcc -DCAT=0 5definitions_value.c

    то программа напечатает строку One.
    Если эту программу скомпилировать так:

        gcc -DCAT=20 5definitions_value.c

    то программа напечатает строку Two   
*/

#include <stdio.h>

int main()
{
    #if defined(CAT)
        #if CAT == 0
            printf("One\n");
        #elif CAT > 10 && CAT + 5 < 30
            printf("Two\n");
        #else
            printf("Three\n");
        #endif
    #endif
}