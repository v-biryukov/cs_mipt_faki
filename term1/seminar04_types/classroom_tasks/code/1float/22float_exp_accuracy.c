/*
    Ошибки, связанные с нехваткой значений экспоненты

    Числа float и double не могут хранить слишком большие числа. 
    Например, максимум для float это примерно  3 * 10^38.
    БОльшие числа чем это тип float хранить не может (конечно, за исключение значения inf)

    Также числа float и double не могут хранить слишком маленькие по модулю числа. 
    Например, минимальное положительное число, которое может хранить float это примерно  10^(-38).

    
    Для чисел типа double пределы примерно такие:

      Максимумальное:               2 * 10^308
      Минимальное положительное     2 * 10^(-308)


*/

#include <stdio.h>

int main() 
{
    float a = 3e38;
    printf("%f\n", a);

    a *= 2;
    printf("%f\n", a);
}

/*
    Задачи:

        Что напечатает данная программа? 
        Скомпилируйте программу и запустите и проверьте свой ответ.
*/