/*
    Цикл for

    Цикл for позволяет записывать итерации с переменной-счётчиком более компактно и удобно, чем цикл while.
    Он выглядит следующим образом:
            
        for (один; два; три)
        {
            тело цикла
        }

        выражение один - будет выполнено до цикла
        выражение два  - это условие, такое же как в цикле while
        выражение три  - это будет выполняться в конце каждой итерации

    
    Например, вот так перезапишется цикл из предыдущего файла:

        i = 1;
        while (i <= 5)                           for (i = 1; i <= 5; i += 1)
        {                                        {
            printf("%i\n", i);                       printf("%i\n", i);
            i += 1;                              } 
        }

    Обратите внимание, что для разделения выражений в цикле for используются не запятые, а точки с запятой.
*/


#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 5; i += 1)
    {
        printf("%i\n", i);
    }
}



/*
    Задача:
    
        Скомпилируйте и запустите программу. Для этого нужно сделать следующее:

            а)  Откройте терминал и перейдите в папку 5for с помощью команды:

                cd путь_до_папки_5for


            б)  Скомпилируйте программу с помощью команды

                gcc 00for.c


            в)  Запустите команду так:

                ./a.out    (Linux)                a.exe    (Windows)
*/