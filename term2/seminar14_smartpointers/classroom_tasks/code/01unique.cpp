#include <iostream>
#include <memory>

int main()
{
    // Выделение памяти на одну переменную типа int в сегменте Стек
    // Память автоматически освободится при завершении функции
    int a = 123;

    // Выделение памяти на одну переменную типа int в сегменте Куча,
    // используя обычный указатель
    // Память не освободится автоматически 
    int* p = new int{123};
    // Для освобождения памяти нужно использовать delete
    delete p;


    // Выделение памяти на одну переменную типа int в сегменте Куча,
    // используя умный указатель std::unique_ptr
    // Память освободится автоматически
    std::unique_ptr<int> q {new int{123}};
}
