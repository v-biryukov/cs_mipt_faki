/*
    Передача массива в функцию

    Теперь мы можем понять, как передаются массивы в функции.
    Когда мы передаём массив в функцию, в неё передаётся не сам массив, а указатель на первый элемент массива.
    Причём абсолютно не важно, что вы указали в параметрах функции тип массива, это всё равно будет указатель.

    В данном примере array внутри функции func это указатель типа int* 
    (несмотря на то, что мы в параметрах функции указали массив - int array[]).
    В этом можно убедиться просто распечатав размер объекта array.

    При вызове функции func(a) массив a не копируется в функцию, вместо этого адрес первого элемента массива a 
    копируется в указатель array.
    Благодаря тому, что к указателю можно также применять квадратные скобочки, можно даже не заметить,
    что array это на самом деле указатель, а не массив.
*/

#include <stdio.h>


void func(int array[])
{
    printf("Size of array in func = %zu\n", sizeof(array));
    printf("array = %p\n", array);
}


int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    
    printf("Size of a = %zu\n", sizeof(a));
    printf("Address of a = %p\n", &a);  

    func(a);
}


/*
    Задачи:

        1)  Что если при передаче массива в функцию указать его размер:

                void func(int array[6])

            Будет ли в этом случае объект array массивом, или так и будет указателем.

*/