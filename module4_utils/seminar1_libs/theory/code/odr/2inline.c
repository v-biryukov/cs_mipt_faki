/*
    inline позволяет обойти ODR, если определения находятся в разных единицах трансляции.
    Но даже с inline нельзя делать несколько определений в одной единице трансляции.
    
    Данный код не скомпилируется.
    Будет ошибка: redefinition of 'cat'
*/

#include <stdio.h>

inline int cat()
{
    return 10;
}

inline int cat()
{
    return 20;
}

int main()
{
    printf("%i\n", cat());
}
