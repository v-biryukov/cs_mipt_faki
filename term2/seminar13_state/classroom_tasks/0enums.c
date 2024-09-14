#include <stdio.h>

/*
    Перичисляемый тип в языке C
    Нужен, чтобы описать значения, которое может принимать ограниченное число значений

    Допустим, мы хотим описать состояние двери в компьютерной игре
    Она может быть открыта (OPEN); закрыта, но не на ключ (CLOSED); закрыта на ключ (LOCKED)

    Конечно, вместо него можно было бы использовать int и где-то запомнить (записать на бумажке),
    что 0 означает OPEN, 1 означает CLOSED, а 2 означает LOCKED, но так можно легко запутаться,
    особенно если значений будет много
*/


enum DoorState 
{
    OPEN, CLOSED, LOCKED
};
// На языке C имена состояний обычно пишут с большой буквы, чтобы постараться избежать конфликт имён

int main()
{
    // Создадим переменную a, которая может применять 3 значения (OPEN, CLOSED и LOCKED)
    enum DoorState a = CLOSED;

    if (a == OPEN)
        printf("It's open!\n");
    else if (a == CLOSED)
        printf("It's closed!\n");
    else
        printf("It's locked :(\n");
}

/* 
    Задания:

        1) Создайте перичисляемый тип, который будет описывать движение персонажа в 2d игре:
            IDLE (стоит), WALKING (идёт), RUNNING (бежит), JUMPING (прыгает)
        2) Создайте переменную b этого типа и присвойте её значение RUNNING. Проверьте правильность
            напечатав состояние
        3) Что будет, если присвоить переменной число 1?
        4) Какой размер переменной перичисления? (узнать можно с помощью sizeof)
        5) Используйте typedef, чтобы упростить имя типа переменной
        6) Используйте оператор switch (за место if), чтобы напечатать состояние
*/