#include <stdio.h>

int main()
{
    int count[5];
    printf("enter the value at index 0\n");
    scanf("%d", &count[0]);
    printf("enter the value at index 1\n");
    scanf("%d", &count[1]);
    printf("enter the value at index 2\n");
    scanf("%d", &count[2]);
    printf("enter the value at index 3\n");
    scanf("%d", &count[3]);
    printf("enter the value at index 4\n");
    scanf("%d", &count[4]);
    printf("enter the value at index 5\n");
    scanf("%d", &count[5]);

    printf("%d\n", count[0]);
    printf("%d\n", count[1]);
    printf("%d\n", count[2]);
    printf("%d\n", count[3]);
    printf("%d\n", count[4]);
    printf("%d\n", count[5]);
    return 0;
}