#include <stdio.h>
#include "alice.h"
#include "bob.h"

int value = 0;

int main()
{
    cat();
    dog();
    cat();
    cat();
    cat();
    dog();
    dog();

    printf("value = %i\n", value);
}