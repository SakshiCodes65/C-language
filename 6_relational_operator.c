#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    printf("%d\n", a < b);  // 5 and 10
    printf("%d\n", a <= b); // 5 and 10
    printf("%d\n", a > b);  // 10 and 5
    printf("%d\n", a >= b); // 55 and 5
    printf("%d\n", a == b); // 5 and 5
    printf("%d\n", a != b); // 5 and 3

    return 0;
}