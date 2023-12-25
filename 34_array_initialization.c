#include <stdio.h>

int main()
{
    int count[5] = {44, 56, 43, 67};
    for (int i = 0; i < 4; i++)
    {
        printf("the value at index %d is %d\n", i, count[i]);
    }
    return 0;
}