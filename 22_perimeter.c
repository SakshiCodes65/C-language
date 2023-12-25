#include <stdio.h>

int perimeter(int l, int b)
{
    int c = 2 * (l + b);
    printf("%d\n", c);
}
int main()
{
    perimeter(3, 4);
    return 0;
}