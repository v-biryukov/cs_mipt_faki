/*
    Конструктор перемещения


    При создании строки std::string из другой строки типа std::string будет происходить
    или копирование или перемещение в зависимости от категории выражения которым инициализируется строка.

    
    Из прошлого семинара известно, что копирование и перемещение объектов типа std::string это весьма непростые операции.
    При копировании нужно скопировать сам объект и массив символов в куче (при этом выделив новую память в куче).
    При перемещении нужно скопировать сам объект, но массив символов в куче не нужно копировать. Вместо этого нужно изменить 
    объект из которого мы перемещаем чтобы он не содержал указатель на этот массив в куче (сделать его пустой строкой).
    Более того, операции копирования и перемещения будут другими если строка маленькая и работает оптимизация SSO.
    
    Как же компилятор понимает, что нужно делать в случае копирования, а что в случае перемещения?


    Из второго семинара известно, что в случае копирования объекта типа std::string вызывается конструктор копирования:

        std::string(const std::string& x)

    В этом конструкторе и прописывается всё, что будет происходить при копировании строки.
    Для перемещения всё происходит аналогично, только теперь вызывается конструктор:

        std::string(std::string&& x)

    В этом конструкторе и будет прописываться всё, что происходит при перемещении строки.
    Такой конструктор называется конструктором перемещения.

    
    Таким образом, создание новой строки вот так:

        std::string c = [какое-то выражение];

    Приведёт к вызову конструктора:

        std::string([какое-то выражение])

    Так как конструкторы перегружены по кактегории принимаемого значения, то будет вызываться или конструктор копирования или 
    конструктор перемещения в зависимости от того, какая категория у [какое-то выражение].
*/


#include <iostream>
#include <vector>
#include <string>
using std::cout, std::endl;



int main()
{
    std::string a {"Axolotl"};
    std::string b {"Bear"};


    std::string c = a;              // Строка a скопируется в строку c.
    std::string d = a + b;          // Временная строка a + b переметится в строку d.
    std::string e = std::move(a);   // Строка a переместится в строку e. После этого строка a станет пустой
}