#include <stdio.h>
#include "alice.h"
#include "bob.h"

void bob(int n)
{
    n /= 2;
    printf("Bob: %i\n", n);
    if (n % 2 == 0)
        bob(n);
    else
        alice(n);
}