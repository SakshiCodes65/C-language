#include <stdio.h>

#define radius 5
int main()
{
#if radius > 20
    {
        printf("radius is greater than 20");
    }
#elif radius > 0 
    {
        printf("radius is greater than zero");
    }
#else
    {
        printf("radius is zero");
    }
#endif
}