/*
    Сортировка

    Сортировка - это задача по изменению порядка элементов массива так, чтобы они находились в упорядоченом состоянии.
    Сортировка по возрастанию - нужно переместить элементы массива так, чтобы они возрастали от элемента к элементу.

    Например, если есть массив  

        42 75 21 82 83 89 20 99 36 63

    Этот массив, отсортированный по возрастанию будет выглядеть так:

        20 21 36 42 63 75 82 83 89 99



    Сортировка выбором - это простейший алгоритм сортировки, который заключается в следующем:

        1)  Найти минимальный элемент массива и поменять его местами с первым.
            Рассмотренный выше массив после этого шага выглядит так:

                20 75 21 82 83 89 42 99 36 63


        2)  Теперь минимальный элемент массива находится на правильном месте. Осталось отсортировать оставшиеся n - 1 элементов.
            На оставшейся части массива найти минимальный и поменять его со вторым элементом.

                20 21 75 82 83 89 42 99 36 63

        3)  Два элемента отсортировано. Теперь нужно найти минимальный элемент на оставшейся части и поменять его с третьим.

                20 21 36 82 83 89 42 99 75 63


        4)  Продолжать так, пока не отсортируем весь массив.


        При этом в реализации сортировки выбором будет внешний и внутрений цикл.
        Внешний отвечает за индекс границы между отсортированной и неотсортированной частью.
        А внутренний цикл просто ищет минимум на неотсортированной части.
*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }


}

/*
    Задача:

        Напишите сортировку выбором. Сортировка должна работать на любом входном массиве.
        
*/