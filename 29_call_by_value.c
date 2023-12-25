#include <stdio.h>

int sum(int a, int b)
{
    int c = a + b;
    printf("%d\n", c);
    a = 45;
    b = 50;
}
int main()
{
    int a = 4, b = 5;
    printf("%d\n", a); // 4
    printf("%d\n", b); // 5
    sum(a, b);         // values copy hokr jati thi
    printf("%d\n", a); // 45  (wrong)
    printf("%d\n", b); // 50   (wrong)
    return 0;
}