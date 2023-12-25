#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(50000 * sizeof(int));
    for (int i = 0; i < 50000; i++)
    {
        printf("enter the %d element: ", i + 1);
        scanf("%d", &ptr[i]);
        free(ptr);
    }
    for (int i = 0; i < 50000; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}