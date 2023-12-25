#include <stdio.h>

int main()
{
    int i;
    printf("enter the num: ");
    scanf("%d", &i); // i = 2
    int c = (2 * i) / (3 * i);
    printf("%d\n", c);
    return 0;
}