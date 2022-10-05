/*
    Размеры структур.

    Рссмотрим такую структуру:
    
        struct dog
        {
            double b;
            char a;
        };

    Чему равен размер этой структуры?
    Теперь поле типа double лежит в начале структур и, следовательно, будет иметь тот же адрес, что и сам структура.
    Но размер структуры всё равно будет 16 байт.
    Так как если бы это было иначе и мы бы создали массив из объектов типа struct dog, то выравнивание
    бы нарушилось.    

    В памяти это будет выглядеть так:


         |--------------------------------struct dog-------------------------------------|
    ═════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤════╤═══
         │    │    │    │    │    │    │    │    │    │    │    │    │    │    │    │    │ 
    ═════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧════╧═══
         |-----------------double----------------|char|--------потерянное место----------|

*/



#include <stdio.h>

struct dog
{
    double b;
    char a;
};

int main()
{
    printf("struct dog size = %zu\n", sizeof(struct dog));
}