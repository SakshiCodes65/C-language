#include <stdio.h>
#define radius -45
#ifndef radius
#error "Radius is not defined"
#endif
int main()
{
#if (radius == 0)
    printf("Value is equal to zero\n");
#elif (radius > 0)
    printf("Value is Positive\n");
#elif (radius < 0)
    printf("Value is negative\n");
#endif
    return 0;
}