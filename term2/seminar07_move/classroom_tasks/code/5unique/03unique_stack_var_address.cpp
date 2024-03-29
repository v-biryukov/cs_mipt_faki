/*
    Так как умный указатель пытается автоматически освободить выделенную память при выходе из области видимости, 
    то хранить в умном указатели адреса переменных, выделенных на стеке нельзя

    В этом примере умный указатель попытается освободить &a. 
    Это, конечно, приведёт к ошибке, так как &a это адрес на стеке, а умные указатели должны
    указывать только на объекты созданные в куче.

    !!  Умные указатели стандартной библиотеки должны указывать только на объект, который нужно освободить.
        Обычно это объект, выделенный в куче.
*/

#include <iostream>
#include <memory>
using std::cout, std::endl;

int main()
{
    if (true)
    {
        int a = 123;
        std::unique_ptr<int> p(&a);
    }

    std::cout << "End of main" << std::endl;
}


/*
    Задачи:

        1)  Можно ли в умном указателе хранить nullptr? То есть, можно ли написать так:
            
            std::unique_ptr<int> p{ nullptr };


        2)  Можно ли создать два unique_ptr, которые оба содержат один адрес в куче? Например, так:
            
            {
                int* p = new int{123};
                std::unique_ptr<int> q1 {p};
                std::unique_ptr<int> q2 {p};
            }
*/