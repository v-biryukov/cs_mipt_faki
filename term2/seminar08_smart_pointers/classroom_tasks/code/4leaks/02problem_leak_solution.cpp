#include <iostream>


void func(int n)
{
    int* p = new int[n];
    int* q = new int[n];


    delete [] p;
    delete [] p;
}


int main()
{
    func(100);
}


/*
    В этой программе может произойти утечка памяти.
    Она может произойти из-за того, что оператор new бросает исключение, если он не может выделить память (если памяти недостаточно).
    Поэтому, если первый new выделил память, а второй new бросил исключение, то память, выделенная первым new, утечёт.
*/