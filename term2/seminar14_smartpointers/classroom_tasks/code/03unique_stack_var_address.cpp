#include <iostream>
#include <memory>

int main()
{
    // Так как умный указатель пытается автоматически освободить
    // выделенную память при выходе из области видимости, то хранить 
    // в умном указатели адреса переменных, выделенных не в Куче нельзя

    // В этом примере умный указатель попытается освободить &a
    // Это, конечно, приведёт к ошибке
    if (true)
    {
        int a = 123;
        std::unique_ptr<int> p(&a);
    }

    std::cout << "End of main" << std::endl;
}

/*
    Задание 1: 
        Можно ли в умном указателе хранить nullptr
        то есть написать так:
        
        std::unique_ptr<int> p{ nullptr };


    Задание 2:
        Можно ли создать два unique_ptr, которые оба содержат один
        адрес в куче. Например, так:
        
        {
            int* p = new int{123};
            std::unique_ptr<int> q1 {p};
            std::unique_ptr<int> q2 {p};
        }
*/