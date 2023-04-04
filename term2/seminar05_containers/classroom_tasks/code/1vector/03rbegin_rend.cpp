/*
    Методы rbegin() и rend()

    rbegin() возвращает обратный итератор на последний элемент.

    rend()  возвращает обратный итератор на фиктивный элемент следующий до первого.
            итератор rend() нельзя разыменовывать, это приведёт к неопределённому поведению.
            С ним можно сравнивать другие итераторы, а также отнимать целые числа.
            Например, если вектор v не пуст, то  *(v.rend() - 1)  это первый элемент. 


    Обратный итератор вектора, это объет типа std::vector<int>::reverse_iterator,
    использующийся для обхода вектора в обратном порядке.
*/

#include <iostream>
#include <vector>
#include <string>
using std::cout, std::endl;

int main()
{
    std::vector<int> v {10, 20, 30, 40, 50, 60, 70};

    cout << *v.rbegin() << endl;
    cout << *(v.rend() - 1) << endl;

    for (std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
        cout << *it << " ";
    cout << endl;
}


/*
    Задача:

        Используйте итератор v.rbegin(), чтобы напечатать на экран третий элемент с конца вектора v.
*/