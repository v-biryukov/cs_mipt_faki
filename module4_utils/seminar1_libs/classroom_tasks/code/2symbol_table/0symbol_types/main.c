/*
    Чтобы посмотреть таблицы символов:

        nm main.o
        objdump -t main.o
        readelf -s main.o
*/

#include <stdio.h>

extern int cat;
int dog;
int mouse = 0x12345678;

const char* wolf = "This is a Wolf";

void elephant() {}
int tiger();

int main()
{
    printf("%i %i\n", cat, tiger());
}