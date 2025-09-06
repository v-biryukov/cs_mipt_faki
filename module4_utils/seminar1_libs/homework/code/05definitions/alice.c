#include <stdio.h>
#include "alice.h"
#include "bob.h"

void cat()
{
    #if defined(UPPERCASE)
        printf("ALICE:CAT\n");
    #else
        printf("alice:cat\n");
    #endif
}