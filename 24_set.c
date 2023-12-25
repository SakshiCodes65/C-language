#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int position;
    scanf("%d", &position);
    int bitmask = 1 << position;
    int ans = bitmask | number;
    printf("%d", ans);
    return 0;
}