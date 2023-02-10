/*
    Основы строения std::vector

    Объекты класса std::vector хранят все объекты в куче, динамически выделяя место под них, если нужно.
    Примерно также, как это делают строки std::string.

    Сам объект std::vector обычно содержит 3 поля:

        T*      mpData     - указатель на данные в куче. 
        size_t  mSize      - размер, то есть количество элементов в векторе
        size_t  mCapacity  - вместимость, то есть сколько элементов вектор может хранить без
                             дополнительного выделения памяти.

    Также у вектора есть методы reserve и resize, которые позволяют нам самим изменить вместимость и размер.

        reserve(n)  -   делает вместимость вектора достаточной, чтобы хранить n элементов типа T.
                        если вместимость вектора недостаточна для хранения n элементов, то выделяет больше памяти в куче.
                        (но не инициализирует её)
                        если вместимость вектора уже достаточна для хранения n элементов, то этот метод ничего не делает.

        resize(n)   -   делает размер вектора равным n. 
                        -   если n меньше текущего размера вектора, то корректно удаляет необходимое количество элементов 
                                из конца вектора.
                        -   если n равно текущему размеру вектора, то ничего не делает.
                        -   если размер вектора был меньше, чем n, то создаёт необходимое количесто элементов и инициализирует 
                                их с помощью value инициализации. Если необходимо, то увеличивает вместимость вектора.


        shrink_to_fit() -   делает вместимость вектора равным его размеру.
                            При этом может происходить перевыделение памяти.



    С одной стороны строение вектора во многом похоже на строение строки, которую мы писали на втором семинаре.
    Но с другой стороны, написать свой вектор значительно сложнее, так как вместо типа char мы теперь храним
    произвольный тип T. И у этого типа могут быть (или не быть) свои конструкторы и операторы присваивания.
    Наличие конструкторов и/или перегруженных операторов у типа T сильно усложняет корректное написание свого
    контейнера, подобного контейнеру std::vector.
*/

#include <iostream>
#include <vector>
#include <string>
using std::cout, std::endl;

int main()
{
    std::vector<int> v;

    for (int i = 0; i <= 300; ++i)
    {
        cout << "size = " << v.size() << ", capacity = " << v.capacity() << "\n";
        v.push_back(i);
    }

}


/*
    Задача:

        1)  Запустите эту программу и посмотрите во сколько раз увеличивается вместимость вектора при нехватки места.

        2)  Зарезервируйте необходимое место перед циклом, чтобы перевыделений памяти не происходило.
*/



