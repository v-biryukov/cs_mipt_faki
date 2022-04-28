#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::cout;
using std::endl;


void printUnique(std::unique_ptr<int> p)
{
    cout << *p << endl;
}


int main()
{
    auto q = std::make_unique<int>(123);

    // При передаче объекта в функцию по значению должно произойти его копирование
    // Но у unique_ptr удалён конструктор копирования, поэтому его передача
    // в функцию по значению приведёт к ошибке:
    printUnique(q);

    // Но можно воспользоваться конструктором перемещения
    // В этом случае указатель передастся в функцию, но указатель q станет недействительным
    printUnique(std::move(q));
}


/*
    Задача 1:
        Проверьте, можно ли передать unique_ptr в функцию по ссылке и/или по константной ссылке
        Если да, то останется ли указатель q в функции main действительным

*/