/*
    Эта программа, которая печатает все простые числа на отрезке [100, 150].

    Для этого написаны функции:

        print_primes - печатает все простые числа на отрезке [a, b]
        is_prime     - проверяет число number на простоту и возвращает 1, если число number простое
                       и 0, если число number не является простым.


    Но почему-то данная программа приводит либо к ошибке (Error), либо к прeдупреждению (Warning).
    Предупреждение возникает если в программе потенциально происходит что-то нехорошее, но в отличии
    от ошибок, программа в этом случае может быть скомпилирована и может даже работать.
    Но в любом случае лучше писать код, который не будет содержать ни ошибок ни предупреждений.


    Попробуйте понять почему в этой программе происходит ошибка или предупреждение.
    Как можно это исправить?
*/


#include <stdio.h>


void print_primes(int a, int b)
{
    for (int i = a; i <= b; ++i)
    {
        if (is_prime(i))
            printf("%i ", i);
    }
    printf("\n");
}

int is_prime(int number)
{
    if (number < 2)
        return 0;

    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
            return 0;
    }
    
    return 1;
}

int main() 
{
    print_primes(100, 150);
}