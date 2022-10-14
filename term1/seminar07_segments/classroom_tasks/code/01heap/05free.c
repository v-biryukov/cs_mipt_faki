/*
    Функция free освобождает память, выделенную с помощью malloc, соответственно free нужно вызывать тогда, 
    когда выделенная память уже не нужна. Она должна вызываться один и ровно один раз для каждого вызова malloc.

    Данный пример показывает как можно использовать malloc и free.
    Сначала мы создали в куче 2 динамических массива размером в 10 элементов типа int каждый.
    Потом один из массивов (на который указывал q) мы освободили, но создали в куче другой динамический массив 
    размером в 20 элементов типа int. При этом адрес нового массива мы записали в указатель q.
    В конце мы освободили оба выделенных на тот момент динамических массива.

    Получается 3 вызова malloc и 3 вызова free. Количества вызовов malloc и free должно совпадать.
*/

#include <stdlib.h>
#include <stdio.h>


int main()
{
    int* p = (int*)malloc(sizeof(int) * 10);
    int* q = (int*)malloc(sizeof(int) * 10);

    // ... 

    free(q);
    q =  (int*)malloc(sizeof(int) * 20); 

    // ...

    free(p);
    free(q);
    
}