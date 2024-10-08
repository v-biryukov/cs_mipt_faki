/*
    Структуры

    На предыдущих семинарах мы прошли множество различных типов данных, такие как:

        1)  Различные типы целых чисел: int, char, long long, size_t и множество других

        2)  Типы для представления вещественных чисел: float, double

        3)  Указатели. Объекты данного типа хранят адреса переменных.

        4)  Массивы. Объекты данного типа хранят в себе некоторое количество однотипных объектов.
            Строки являются частным случаем массивов, строки - это массивы объектов типа char.

    
    Однако, если мы захотим написать программу, которая делает что-то полезное, то мы быстро поймём, что
    для того, чтобы описать какие-либо объекты из прикладной области или реального мира, нам этих типов данных
    будет недостаточно. Например:

        -   Мы захотели написать программу для работы с геометрией на плоскости.
            Вероятно нам понадобиться объекты, которые описывают точки в двумерном пространстве.
            Как представить такую точку в коде? Для этого можно использовать 2 переменные типа float:

                float x, y;

            Однако такой способ неудобен. Используя такой подход, нам пришлось бы создавать по две переменные для 
            каждой точки. И передавать в любую функцию по 2 аргумента для каждой точки. 
            Более того, мы бы не могли вернуть точку из функции так как из функции можно возвращать только один объект.
            Более того, если бы нам понадобилось создать массив из точек, то нам бы пришлось создавать 2 массива чисел типа float.

            Ещё один подход. Будем использовать массив размером 2:

                float coords[2];

            Этот способ тоже неудобен так как массивы неудобно передавать в функции и нельзя возвращать и будет
            неудобно создавать массивы точек.



        -   Мы захотели написать программу для книжного магазина.
            Вероятно нам понадобиться объекты, которые описывают книгу в книжном магазине.
            Допустим эта книга описывается своим названием (строка), количеством страниц (int) и её ценой (float).
            Как представить такую точку в коде? Для этого можно использовать 3 переменные:

                char title[50];
                int pages;
                float price;
        
            Как вы понимаете, такой подход ещё более неудобен чем в случае с точками.
            Например, чтобы передать книгу в функцию, нам бы пришлость передавать 3 аргумента для каждой книги.


    Структуры - это композитный тип данных, объединяющий набор объектов в один объект.
    Используя структуры, мы можем сами создать новый тип данных, используя другие типы данных как кирпичики.
    Например:

        -   Чтобы создать тип данных, описывающий точку в двумерном пространстве, нужно написать так:

                struct point
                {
                    float x;
                    float y;
                };

            После того, как мы это написали, у нас появился новый тип данных, по имени struct point.
            Чтобы создать переменную типа struct point по имени a нужно написать:

                struct point a;
            
            Переменная a типа struct point хранит в себе 2 переменные типа float по имени x и y.
            Получить доступ к внутренностям переменной a можно с помощью оператора . (точка). Вот так:
                
                a.x = 2.5;
                a.y = 4.0;

            Можно считать, что создав переменную a типа struct point, мы как-бы создали 2 переменные
            типа float под именами a.x и a.y.

    Элементы, из которых состоит структура также называются полями структуры.
    То есть у структуры struct point есть 2 поля: x и y.
*/


#include <stdio.h>

struct point
{
    float x;
    float y;
};


int main()
{
    struct point a;
    a.x = 2.5;
    a.y = 4.0;
    
    printf("(%f, %f)\n", a.x, a.y);
}