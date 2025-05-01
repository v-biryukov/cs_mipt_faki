#include <stdio.h>
#include "alice.h"
#include "bob.h"

void dog()
{
    #if defined(UPPERCASE)
        printf("BOB:DOG\n");
    #else
        printf("bob:dog\n");
    #endif
}