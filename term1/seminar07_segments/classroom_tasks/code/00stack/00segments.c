/*
    Сегменты памяти

    Вся память, доступная процессу делится на сегменты. Разделение на сегменты зависит от операционной системы, 
    но практически на всех операционных системах есть следующие сегменты памяти: Стек, Куча, Данные и Текст.
    Примерная схема расположения этих сегментов в памяти такая:
    

            ╔═══════════════════════════════════╗
            ║                                   ║
            ║           Сегмент Стек            ║
            ║                                   ║
            ╟───────────────────────────────────╢
            ║                 |                 ║
            ║                 ▼                 ║
            ║                                   ║
            ║                                   ║
            ║                                   ║
            ║                                   ║
            ║                 ▲                 ║
            ║                 |                 ║
            ╟───────────────────────────────────╢
            ║                                   ║
            ║                                   ║
            ║                                   ║
            ║           Сегмент Куча            ║
            ║                                   ║
            ║                                   ║
            ║                                   ║
            ╟───────────────────────────────────╢
            ║                                   ║
            ║          Сегмент Данные           ║
            ║                                   ║
            ╟───────────────────────────────────╢
            ║                                   ║
            ║          Сегмент Текст            ║
            ║                                   ║
            ╚═══════════════════════════════════╝

    
    1)  Сегмент Стек Вызовов (или просто Стек)

        В этом сегменте хранятся вся информация, необходимая для вызова функция.
        В частности, локальные переменные функций, в том числе функции main, хранятся в стеке.
        Память в стеке выделяется при вызове функции и освобождается при завершении функции.
        Все переменные, которые мы создавали в этом курсе до этого семинара, хранились в сегменте стек.
        Размер этого сегмента ограничен операционной системой и обычно не больше чем несколько мегабайт.


    2)  Сегмент Куча

        В куче программист может сам запросить необходимое количество памяти с помощью специальных функций malloc и free.
        Память в куче выделятся с помощью функции malloc и освобождается с помощью функции free.
        В куче можно выделить гораздо больше памяти чем есть в стеке, вплоть до всей доступной памяти (зависит от ОС).
        Но выделение памяти в куче происходите медленней, чем в стеке.

    
    3)  Сегмент Данные

        В сегменте данные хранятся глобальные и статические переменные, строковые литералы.
        Этот сегмент сам может делиться на несколько сегментов, таких как сегмента неинициализированных данный (bss)
        и сегмент данных только для чтения (rodata).
        Размер этого сегмента тоже может быть достаточно большим.


    4)  Сегмент Текст (также известный как Сегмент Код)

        В сегменте текст хранятся исполняемые инструкции программы в бинарном представлении.
*/

int main() {}