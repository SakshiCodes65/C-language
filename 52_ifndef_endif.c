#include <stdio.h>

// #define radius
int main()
{
#ifndef radius
    {
        printf("radius is not defined");
    }
#else
    {
        printf("radius is defined");
    }

#endif
    return 0;
}