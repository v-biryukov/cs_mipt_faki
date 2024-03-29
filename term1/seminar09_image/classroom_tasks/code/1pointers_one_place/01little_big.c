/*
    Порядок байтов. Little endian и big endian.

    Переменные могут хранится в памяти по разному. Например, может различаться порядок байт.


    Пусть у нас есть следующая переменная:

        int a = 0x12345678;

    Для её хранения будет использоваться 4 байта, но порядок байт может отличаться на разных системах.
    Обычно используются для порядка байт:

        1)  Прямой порядок байт,   также известный как Big Endian
        2)  Обратный порядок байт, также известный как Little Endian


    

              Big Endian                                        Little Endian       

    
          |---------a---------|                              |---------a---------|                    
    ══╤═══╤════╤════╤════╤════╤════╤══════             ══╤═══╤════╤════╤════╤════╤════╤══════         
      │   │ 12 │ 34 │ 56 │ 78 │    │                     │   │ 78 │ 56 │ 34 │ 12 │    │               
    ══╧═══╧════╧════╧════╧════╧════╧══════             ══╧═══╧════╧════╧════╧════╧════╧══════         
                         


    !!  Обратите внимание, что тут говорится только о порядке байт.
        А не о порядке бит внутри байта.


    На десктопных системах в основном используется порядок байт Little Endian.
    Поэтому в дальнейшем, в примерах курса, будет использоваться порядок байт Little Endian.


    Задача:

        Скомпилируйте программу и запустите её.
        Выясните какой порядок байт используется на вашей системе.
*/



#include <stdio.h>


int main()
{
    int a = 0x12345678;

    int* pa = &a;
    char* pb = &a;


    printf("%x\n", *pa);


    printf("%x\n", *pb);
    printf("%x\n", *(pb + 1));
}