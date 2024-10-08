/*
    Итераторы STL

    Итераторы в STL - это специальные объекты, которые используются для доступа к элементам STL-контейнеров.
    Благодаря им мы можем, например, обойти все элементы контейнера или задать в этом контейнере некоторый диапазон.
    Для каждого контейнера есть свой тип итератора и этот тип определён внутри самого класса контейнера
    и называется iterator. То есть, если у нас есть контейнер типа std::vector<int>, то тип итератора для
    такого контейнера будет std::vector<int>::iterator.

    Также, у каждого контейнера есть специальные методы:

        1)  метод begin - возвращает итератор на первый элемент
        2)  метод end   - возвращает итератор на фиктивный элемент, следующий за последним

    
    Следующий код создаёт контейнер вектор и итератор, указывающий на первый элемент этого вектора:

        std::vector<int> v {10, 20, 30, 40, 50};
        std::vector<int>::iterator it = v.begin();

    
    Операции, которые можно проводить с итератором вектора:

        1)  Инкремент/декремент итератора
            В этом случае итератор начинает указывать на предыдущий или следующий элемент.

                it++    ++it    it--   --it

        2)  Прибавление/вычитание целого числа
            В этом случае итератор начинает указывать на элемент, смещённый на это число

                it += n   it -= n

        3)  Сумма/разность итератора и числа
            Результат этой операции - это новый итератор, который смещён на данное число

                it + n    it - n

        4)  Вычитание итераторов
            Возвращает количество элементов между этими объектами

                it1 - it2


        5)  Сравнения
            Можно сравнивать, указывают ли итераторы на один и тот же объект

                it1 == it2      it1 != it2    it1 < it2  ...


        6)  Унарная звёздочка
            Поставив * перед итератором мы получим объект, на который указывает итератор

                *it


        7)  Оператор индексирования

                it[k]

            Также, как и для указателей, it[k] это то же самое, что и *(it + k).


    Важно отметить, что набор операций для других итераторов (например, для итератора std::list) может сильно отличаться.

    Итераторы вектора очень похожи на указатели, и для вектора действительно можно использовать указатель в качестве итератора.
    
    Главное отличие итератора от указателя заключается в том, что итератор является объектом, у которого
    перегружены все операторы, перечисленные выше. И мы можем перегрузить эти операторы так как захочем, в отличии от
    указателей, где эти операторы вшиты в язык и изменить мы их не сможем.
*/



#include <iostream>
#include <vector>
using std::cout, std::endl;

int main()
{
    std::vector<int> v {10, 20, 30, 40, 50};
    std::vector<int>::iterator it = v.begin();

    cout << *it << endl;
    cout << *(it + 1) << endl;


    it = v.end();
    it--;
    cout << *it << endl;

    std::vector<int>::iterator it2 = v.begin();
    cout << (it > it2) << endl;
}


/*
    Задачи:

        1)  Что напечатает данная программа?

        2)  Напишите цикл for, в котором напечатайте все элементы вектора v
            Но для обхода используйте не целое число, как обычно, а итератор.
*/