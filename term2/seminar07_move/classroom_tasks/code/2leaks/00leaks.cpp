/*
    Проблема утечек памяти

    Одни из частых ошибок, которые возникают при программировании на языке C, являются утечки памяти.
    Утечка памяти возникает тогда, когда была выделена память в куче с помощью функции malloc, но эта память
    не была освобождена с помощью функции free.


    Например, в этой программе утечка памяти происходит в функции func, так как в ней выделяется память с помощью 
    malloc, но не освобождается с помощью free. После выхода из функции func мы не сможем освободить эту память, 
    даже если бы хотели, так как мы не знаем чему равен указатель p.


    Может показаться, что такую ошибку легко увидеть, но на самом деле, это не всегда верно.
    Программа может быть очень большой, выделений памяти может быть очень много,
    выделение памяти может происходить в одной функции, а освобождение этой памяти происходить в другой функции и т. д.


    Поэтому хотелось иметь способ писать код так, чтобы минимизировать возможные утечки памяти.
*/




#include <iostream>
#include <cstdlib>


void func(int n)
{
    int* p = (int*)std::malloc(n * sizeof(int));


    // забыли сделать std::free(p);
}


int main()
{
    func(100); // Утечка
    func(200); // Ещё одна утечка
}


/*
    Задача:

        -   Может ли память "утечь", если мы в языке C++ будем использовать new/delete вместо malloc/free.
*/