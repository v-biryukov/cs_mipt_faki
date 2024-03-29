/*
    Функции для динамического выделения памяти содержатся в библиотеки <stdlib.h>

        void* malloc(size_t n)      

            Выделяет n байт в сегменте памяти куча и возвращает указатель void* на начало
            этой памяти. Если память выделить не получилось (например памяти не хватает), 
            то функция вернёт значение NULL. (NULL – это просто константа равная нулю).


        void free(void* p)          

            Освобождает выделенную память. Если ненужную память вовремя не освободить, то она останется 
            помеченной, как занятая до момента завершения программы. Произойдёт так называемая утечка памяти.
            На каждый вызов malloc должен приходиться один (и только один) вызов free.


        void* realloc(void* p_old, size_t new_n) 

            Перевыделяет выделенную память. Указатель p_old должен указывать на ранее 
            выделенную память. Память, на которую ранее указывал p_old, освободится.
            Если память перевыделить не получилось, то функция вернёт значение NULL.
            При этом указатель p_old будет продолжать указывать на старую память, она не освободится.


    Допустим мы захотели создать в куче одно число типа int, равное 123. Как это сделать?
    Сначала нужно выделить необходимое количество памяти под число типа int в куче.
    Число типа int занимает 4 байта, поэтому для выделения 4-х байт в куче вызовем malloc так:

        malloc(4);

    Функция malloc возвращает адрес на только что выделенную память в куче.
    Нужно где-то сохранить этот адрес. Для этого создадим указатель и сохраним этот адрес в нём:

        int* p = malloc(4);

    Теперь у нас есть указатель, который указывает на область памяти кучи размером в 4 байта.
    Разыменовав указатель, мы получим объект типа int, который хранится в куче.

    Чтобы освободить память, которую мы выделили в куче, используем функцию free.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int* p = malloc(4);

    *p = 123;
    printf("%i\n", *p);

    free(p);
}

/*
    Задача:

        Какие недостатки есть в коде, приведённом выше?

*/