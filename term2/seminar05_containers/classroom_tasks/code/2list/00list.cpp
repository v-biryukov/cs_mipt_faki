/*
    Класс std::list - двусвязный список.

    Основные методы:

        size_t size()               -   возвращает количество элементов в списке.
                                        работает за O(1), так как количество элементов отдельно хранится внутри списка


        T& front()                  -   возвращает ссылку на первый элемент
        T& back()                   -   возвращает ссылку на последний элемент
        
        void push_back(const T& el) -   добавляет элемент в конец списка
        void pop_back()             -   удаляет элемент из конца списка
        void push_front(const T& el)-   добавляет элемент в начало списка
        void pop_front(const T& el) -   удаляет элемент из начала списка
                                        все эти методы работают за O(1)


        std::list<T>::iterator begin() - возвращает итератор на первый элемент  
        std::list<T>::iterator end()   - возвращает итератор на фиктивный элемент, следующий после последнего.
        по аналогии с вектором есть методы rbegin, rend, cbegin, cend, crbegin, crend.


        insert(std::list<T>::iterator it, const T& elem) -
                                        вставляет элемент elem до элемента на который указывает итератор it, работает за O(1).

        erase(std::list<T>::iterator it) -
                                        удаляет элемент на который указывает итератор it, работает за O(1).

        operator=   -   присваивание
        swap        -   поменять местами два списка
        операторы сравнения двух списков (лексиграфическое сравнение).



    Преимущество списка по сравнению с массивом в том, что можно быстро добавлять и удалять элементы в любое место списка 
    (если это положение известно), тогда как в массив можно быстро добавлять/удалять только в конец.

    Недостаток же списка по сравнению с массивом заключается в том, что в списке нет способы быстро получить элемент по индексу.
    Обратите внимание, что у списка нет оператора индексации operator[],
    так как в связном списке нет быстрого способа получить доступ к элементу по его индексу.
    Если бы такой метод был бы написан, то он работал бы за O(n), что очень плохо.
    Поэтому для обхода связного списка нужно использовать итераторы.
*/

#include <iostream>
#include <list>
#include <string>
using std::cout, std::endl;

int main()
{
    std::list<int> l {10, 20, 30, 40, 50, 60, 70};

    cout << "List size = " << l.size() << endl;


    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;
}


/*
    Задачи:

        1)  Создайте двусвязный список из строк типа std::string  "Cat", "Dog", "Mouse", "Lion" 
            и напечатайте его. Для обхода списка используйте итераторы.

        2)  Добавьте строку "Tiger" в начало списка.

        3)  Добавьте строку "Elephant" перед элементом "Mouse".
            В отличии от итераторов вектора, к итераторам списка нельзя прибавлять числа.
            Чтобы продвинуть итератор вперёд нужно использовать функцию std::advance.

        4)  Напечатайте список в обратном порядке. Используйте обратный итераторы rbegin() и rend().
*/
