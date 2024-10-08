/*
    Считывание произвольного количества элементов.

    В предыдущих семинарах мы ещё не умели создавать массив произвольного размера.
    Поэтому, когда мы считывали заранее неизвестное количество чисел, то для их хранения мы
    создавали массив достаточно большого размера, например размера в 1000 элементов:

        int n;
        scanf("%i", &n);

        int array[1000];
        for (int i = 0; i < n; ++i)
            scanf("%i", &array[i]);

    Этот подход, очевидно, имеет массу недостатков:

        -   Если n < 1000, то мы в пустую тратим память.
        -   Если n > 1000, то мы не сможем считать все числа в такой массив.
        -   Мы можем увеличить размер массива, например вместо 1000 поставить 1000000, но не сильно.
            Так, нельзя сделать этот массив больше, чем максимальный размер стека (несколько мегабайт)


    Более правильно в этом случае использовать динамическое выделение памяти в куче.
    В этом случае мы можем задать размер массива прямо во время исполнения программы, после считывания числа n:

        int n;
        scanf("%i", &n);

        int* array = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; ++i)
            scanf("%i", &array[i]);
*/

#include <stdlib.h>
#include <stdio.h>

void print_array(int* array, size_t n)
{
    for (size_t i = 0; i < n; ++i)
        printf("%i ", array[i]);
    printf("\n");
}


int main()
{
    int n;
    scanf("%i", &n);

    int* array = (int*)malloc(n * sizeof(int));
    for (size_t i = 0; i < n; ++i)
        scanf("%i", &array[i]);


    for (size_t i = 0; i < n; ++i)
        printf("%i ", array[i]);
    printf("\n");


    free(array);
}