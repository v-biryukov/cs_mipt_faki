#include <stdio.h>
#include "alice.h"
#include "bob.h"

void alice(int n)
{
    if (n == 1)
        return;

    n = 3 * n + 1;
    printf("Alice: %i\n", n);
    bob(n);
}