#include <stdio.h>

#define radius
int main()
{
#ifdef radius
    {
        printf("radius is defined");
    }
#else
    {
        printf("radius is not defined");
    }

#endif
    return 0;
}