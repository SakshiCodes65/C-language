#include <stdio.h>
// #define area
int main()
{
#ifdef area
    printf("Area is defined");
#else
    printf("Area is not defined");
#endif
    return 0;
}