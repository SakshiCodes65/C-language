#include <stdio.h>

int main()
{
    int n = 5;
    int count[n];
    int *adress = count;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", adress);
        adress++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value at index %d is %d\n", i, count[i]);
    }
    return 0;
}