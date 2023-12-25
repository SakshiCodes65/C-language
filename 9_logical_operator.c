#include <stdio.h>

int main()
{
    printf("AND\n");
    printf("%d\n", 2 > 1 && 3 < 5); // 1
    printf("%d\n", 2 > 6 && 3 < 5); // 0
    printf("%d\n", 2 > 6 && 3 < 1); // 0
    printf("OR\n");
    printf("%d\n", 2 > 1 || 3 < 5); // 1
    printf("%d\n", 2 > 6 || 3 < 5); // 1
    printf("%d\n", 2 > 6 || 3 < 1); // 0
    printf("NOT\n");
    printf("%d\n", !(2 > 1));
    return 0;
}