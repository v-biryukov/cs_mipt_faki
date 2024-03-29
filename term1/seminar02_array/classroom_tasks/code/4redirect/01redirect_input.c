/*
    Перенаправление потока ввода


    С помощью метода Перенаправления потока можно не только записывать в файл, но и считывать из файла.
    Для этого вам нужно перенаправить входной поток, так чтобы он шел из заданного файла. Это можно сделать следующим образом:

        ./a.out < input.txt     (Linux)             a.exe < input.txt     (Windows)

    Обратите внимание, что в этом случае поменялось направление стрелочки.
    После этого функция scanf не будет просить пользователя ввести данные, а будет считывать всё из файла input.txt.


    Данная программа считываем одно число и печатает его квадрат. Если скомпилировать её и запустить обычным образом, 
    то программа попросит пользователя ввести число. После ввода, программа напечатает квадрат введённого числа.
    Но если перенаправить в эту программу файл  input.txt  то программа считает число оттуда и напечатает квадрат этого числа на экране.
    Так как в файле input.txt записано число 42, то на экране напечатается 1764.

*/


#include <stdio.h>

int main()
{
    int a;
    scanf("%i", &a);

    printf("%i\n", a * a);
}




/*
    Задача:

        1)  Скомпилируйте эту программу. Запустите её, перенаправив ввод в эту программы из файла  input.txt.
            После этого на экране должно напечататься число 1764.
            
        
        2)  Можно ли одновременно перенаправить и ввод и вывод, то есть можно ли запустить программу так:

                ./a.out < input.txt > output.txt     (Linux)               a.exe < input.txt > output.txt     (Windows)

            Чтобы программа читала из файла input.txt и записывала в файл output.txt.
*/