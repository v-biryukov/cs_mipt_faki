#include <stdio.h>
#include <stdlib.h>
#include "cube.h"

#include <dlfcn.h>

int main()
{
    void* lib = dlopen("./libcube.so", RTLD_LAZY);
    if (lib == NULL)
    {
        printf("Error: ", dlerror());  
        exit(1);
    }
    
    int (*func)(int) = dlsym(lib, "cube");
    if (func == NULL)
    {
        printf("Error: ", dlerror());
        exit(1);
    }
    
    printf("%i\n", func(5));
}